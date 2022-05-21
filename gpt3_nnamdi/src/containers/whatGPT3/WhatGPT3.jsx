import React from 'react';
import { Feature } from '../../components';
import './whatGPT3.css';

const WhatGPT3 = () => {
  return (
    <div className= "gpt3__whatgpt3 section__margin" id = "wgpt3">
      <div className= "gpt3__whatgpt3-feature">
        <Feature title = "What is GPT-3" text = "GPT-3, or the third generation Generative Pre-trained Transformer, is a neural network machine learning model trained using internet data to generate any type of text.Developed by OpenAI, it requires a small amount of input text to generate large volumes of relevant and sophisticated machine-generated text.-Ronald Schmelzer."/>
      </div>
      <div className= "gpt3__whatgpt3-heading">
        <h1 className = "gradient__text"> The possibilities are beyond your imagination</h1>
        <p>Explore The Library</p>
      </div>
      <div className = "gpt3__whatgpt3-container">
        <Feature title = "Chatbots" text = "GPT-3 bots can analyze, understand, and respond to customer questions; predict needs based on a single word; and enhance their human-like responses with every interaction."/>
        <Feature title = "Knowledgebase" text = "Your existing knowledgebase may be a bunch of documents or a WordPress Website with numerous articles. In whatever form this knowledgebase exist, you need to find a way to extract the content in plain-text. Generate separate text chunks for each article." />
        <Feature title = "Education" text = "GPT-3 makes use of neural networks, in which a computer learns to carry out some venture by analyzing education examples." />
      </div>
    </div>
  );
}

export default WhatGPT3;