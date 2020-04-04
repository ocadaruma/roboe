module.exports = {
  configureWebpack: {
    resolve: {
      symlinks: false,
      extensions: ['.wasm']
    },
    module: {
      rules: [
        {
          test: /\.wasm$/,
          type: "webassembly/experimental"
        }
      ]
    }
  }
};
