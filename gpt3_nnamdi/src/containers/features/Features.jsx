import React from 'react';
import { Feature } from '../../components';
import './features.css';

const featuresData = [
  {
    title: 'Improving end distrusts Instantly',
    text: 'GPT-3 proved beyond doubt to be a master of language generation tasks. From writing poetry and songs to mimicking human-made essays, to coding. Not a few startups have built products on top of the model — and some have found impressive success.'
  },
  {
    title: 'Become the tended active',
    text: 'Given any text prompt like a phrase or a sentence, GPT-3 returns a text completion in natural language. Developers can “program” GPT-3 by showing it just a few examples or “prompts.”.'
  },
  {
    title: 'Message or I&aposm nothing',
    text: '“Playing with GPT-3 feels like seeing the future" - Arram Sabeti'
  },
  
]

const Features = () => {
  return (
    <div className= "gpt3__features section__padding" id = "features">
      <div className= "gpt3__features-heading">
        <h1 className= "gradient__text">The Future is Now and You Just Need To Realize It.
        Step into Future Today & Make it Happen.</h1>
        <p>Request Early Access to Get Started.</p>
      </div>
      <div className = "gpt3__features-container">
        {featuresData.map((item, index) => (
          <Feature title = {item.title} text = {item.text} key ={item.title + index}/>
        ))}
      </div>
    </div>
  );
}

export default Features;