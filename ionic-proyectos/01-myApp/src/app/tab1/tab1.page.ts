import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'app-tab1',
  templateUrl: 'tab1.page.html',
  styleUrls: ['tab1.page.scss']
})
export class Tab1Page implements OnInit{

  constructor() {}

  ngOnInit(){
    console.log('hola mundo');
    
    debugger;
     let numero = 0;
     numero = 9;
     numero += 3;
     console.log(numero);
  }

}
