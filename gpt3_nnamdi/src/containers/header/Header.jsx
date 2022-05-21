import React from 'react';
import './header.css';
import people from '../../assets/people.png';
import ai from '../../assets/ai.png';

const Header = () => {
  return (
    <div className= "gpt3__header section__padding" id = "home">
        <div className= "gpt3__header-content">
          <h1 className= "gradient__text">Let's Build Something amazing with GPT-3 OpenAI</h1>
          <p> Welcome to the second UI/UX modern website developed by Nnamdi Ajoku. 
              Generative Pre-Trained Transformer 3 is an autoregressive language model that uses
              deep learning to produce human-like text.
          </p>
          <div className= "gpt3__header-content__input">
            <input  type = "email" placeholder = "Your Email Address"/>
            <button type ="button"> Get Started</button>
          </div>
          <div className= "gpt3__header-content__people">
            <img src = {people} alt = "people"/>
            <p>1600 people requested access a visit in the last 24hrs</p>
          </div>
        </div>
        <div className= "gpt3__header-image">
          <img src = {ai} alt = "ai" />
        </div>
    </div>
  );
}

export default Header;