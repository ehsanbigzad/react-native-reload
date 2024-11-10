const Reload = require('./NativeReload').default;

export function multiply(a: number, b: number): number {
  return Reload.multiply(a, b);
}
