import React from 'react';
import './possibility.css';
import possibilityImage from '../../assets/possibility.png';

const Possibility = () => {
  return (
    <div className= "gpt3__possibility section__padding" id = "possibility">
      <div className= "gpt3__possibility-image">
        <img src = {possibilityImage} alt = "possibility" />
      </div>
      <div className= "gpt3__possibility-content">
        <h4>Request Early Access to Get Started</h4>
        <h1 className = "gradient__text">The possibilities are beyond your imagination</h1>
        <p>GPT-3 has the "potential to advance both the beneficial and harmful applications of language models. -Sagar, Ram (June 3, 2020)</p>
        <h4>Request Early Access to Get Started</h4>
      </div>
    </div>
  );
}

export default Possibility;