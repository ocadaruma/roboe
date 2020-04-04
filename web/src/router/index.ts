import Vue from 'vue';
import VueRouter from 'vue-router';
import Oboe from '../views/Oboe.vue';

Vue.use(VueRouter);

const routes = [
  {
    path: '/',
    name: 'Oboe',
    component: Oboe,
  },
];

const router = new VueRouter({
  mode: 'history',
  base: process.env.BASE_URL,
  routes,
});

export default router;
