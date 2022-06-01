// This code is by Divesh

import java.awt.Canvas;
import java.awt.Color;
import java.awt.Dimension;
import java.awt.Graphics2D;
import java.awt.image.BufferStrategy;
import java.awt.event.*;
import javax.swing.*;

public class program3 implements Runnable {

    JFrame frame;
    int myX = 200;
    int myY = 200;
    int delta = 10;  // Change this to change the shape movement speed
    Canvas canvas;
    BufferStrategy bufferStrategy;
    boolean running = true;

    public program3() {
        frame = new JFrame("Control from Arrow Keys");
        JPanel panel = (JPanel) frame.getContentPane();
        panel.setPreferredSize(new Dimension(500, 500));
        panel.setLayout(null);
        canvas = new Canvas();
        canvas.setBounds(0, 0, 500, 500);
        canvas.setIgnoreRepaint(true);
        panel.add(canvas);
        canvas.addKeyListener(new KeyAdapter() {
            @Override
            public void keyPressed(KeyEvent evt) {
                moveIt(evt);
            }
        });
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.pack();
        frame.setResizable(false);
        frame.setVisible(true);
        canvas.createBufferStrategy(2);
        bufferStrategy = canvas.getBufferStrategy();
        canvas.requestFocus();
    }

    public void run() {
        while (running = true) {
            Paint();
            try {
                Thread.sleep(25);
            } catch (InterruptedException e) {
            }
        }
    }

    public static void main(String[] args) {
        program3 ex = new program3();
        new Thread(ex).start();
    }

    public void Paint() {
        Graphics2D g = (Graphics2D) bufferStrategy.getDrawGraphics();
        g.clearRect(0, 0, 500, 500);
        Paint(g);
        bufferStrategy.show();
    }

    protected void Paint(Graphics2D g) {
        g.setColor(new Color(245, 122, 147));
        g.fillOval(myX, myY, 70, 70);
    }

    public void moveIt(KeyEvent evt) {
        switch (evt.getKeyCode()) {
            case KeyEvent.VK_DOWN:
                myY += delta;
                break;
            case KeyEvent.VK_UP:
                myY -= delta;
                break;
            case KeyEvent.VK_LEFT:
                myX -= delta;
                break;
            case KeyEvent.VK_RIGHT:
                myX += delta;
                break;
        }
    }
}
