// Time complexity:o(n)

int maxProduct(vector<int>& nums) {
    int minProduct = nums[0],maxProduct=nums[0],ans=nums[0];
    for(int i=1;i<nums.size();i++){
        int choice1=nums[i]*minProduct;
        int choice2=nums[i]*maxProduct;
        minProduct=min(nums[i],min(choice1,choice2));
        maxProduct=max(nums[i],max(choice1,choice2));
        ans=max(ans,maxProduct);
    }
    return ans;
}

int maxProduct(vector<int>& nums) {
    int mx=nums[0],mn=nums[0],ans=nums[0];
    
    for(int i=1;i<nums.size();i++){
        if(nums[i]<0){
            swap(mx,mn);
        }
        mx=max(nums[i],mx*nums[i]);
        mn=min(nums[i],mn*nums[i]);
        ans=max(ans,mx);
    }
    return ans;
}




ServerResponse {
  
  req: IncomingMessage {
    _readableState: ReadableState {
      objectMode: false,
      highWaterMark: 16384,
      buffer: BufferList { head: null, tail: null, length: 0 },
      length: 0,
      pipes: null,
      pipesCount: 0,
      flowing: null,
      ended: true,
      endEmitted: false,
      reading: false,
      sync: true,
      needReadable: false,
      emittedReadable: false,
      readableListening: false,
      resumeScheduled: false,
      emitClose: true,
      autoDestroy: false,
      destroyed: false,
      defaultEncoding: 'utf8',
      awaitDrain: 0,
      readingMore: true,
      decoder: null,
      encoding: null,
      [Symbol(kPaused)]: null
    },
    readable: true,
    _events: [Object: null prototype] {
      end: [Function: resetHeadersTimeoutOnReqEnd]
    },
    _eventsCount: 1,
    _maxListeners: undefined,
    socket: Socket {
      connecting: false,
      _hadError: false,
      _parent: null,
      _host: null,
      _readableState: [ReadableState],
      readable: true,
      _events: [Object: null prototype],
      _eventsCount: 8,
      _maxListeners: undefined,
      _writableState: [WritableState],
      writable: true,
      allowHalfOpen: true,
      _sockname: null,
      _pendingData: null,
      _pendingEncoding: '',
      server: [Server],
      _server: [Server],
      timeout: 120000,
      parser: [HTTPParser],
      on: [Function: socketListenerWrap],
      addListener: [Function: socketListenerWrap],
      prependListener: [Function: socketListenerWrap],
      _paused: false,
      _httpMessage: [Circular],
      _peername: [Object],
      [Symbol(asyncId)]: 977,
      [Symbol(kHandle)]: [TCP],
      [Symbol(lastWriteQueueSize)]: 0,
      [Symbol(timeout)]: Timeout {
        _idleTimeout: 120000,
        _idlePrev: [TimersList],
        _idleNext: [TimersList],
        _idleStart: 245145,
        _onTimeout: [Function: bound ],
        _timerArgs: undefined,
        _repeat: null,
        _destroyed: false,
        [Symbol(refed)]: false,
        [Symbol(asyncId)]: 991,
        [Symbol(triggerId)]: 979
      },
      [Symbol(kBuffer)]: null,
      [Symbol(kBufferCb)]: null,
      [Symbol(kBufferGen)]: null,
      [Symbol(kCapture)]: false,
      [Symbol(kBytesRead)]: 0,
      [Symbol(kBytesWritten)]: 0
    },
    connection: Socket {
      connecting: false,
      _hadError: false,
      _parent: null,
      _host: null,
      _readableState: [ReadableState],
      readable: true,
      _events: [Object: null prototype],
      _eventsCount: 8,
      _maxListeners: undefined,
      _writableState: [WritableState],
      writable: true,
      allowHalfOpen: true,
      _sockname: null,
      _pendingData: null,
      _pendingEncoding: '',
      server: [Server],
      _server: [Server],
      timeout: 120000,
      parser: [HTTPParser],
      on: [Function: socketListenerWrap],
      addListener: [Function: socketListenerWrap],
      prependListener: [Function: socketListenerWrap],
      _paused: false,
      _httpMessage: [Circular],
      _peername: [Object],
      [Symbol(asyncId)]: 977,
      [Symbol(kHandle)]: [TCP],
      [Symbol(lastWriteQueueSize)]: 0,
      [Symbol(timeout)]: Timeout {
        _idleTimeout: 120000,
        _idlePrev: [TimersList],
        _idleNext: [TimersList],
        _idleStart: 245145,
        _onTimeout: [Function: bound ],
        _timerArgs: undefined,
        _repeat: null,
        _destroyed: false,
        [Symbol(refed)]: false,
        [Symbol(asyncId)]: 991,
        [Symbol(triggerId)]: 979
      },
      [Symbol(kBuffer)]: null,
      [Symbol(kBufferCb)]: null,
      [Symbol(kBufferGen)]: null,
      [Symbol(kCapture)]: false,
      [Symbol(kBytesRead)]: 0,
      [Symbol(kBytesWritten)]: 0
    },
    httpVersionMajor: 1,
    httpVersionMinor: 1,
    httpVersion: '1.1',
    complete: true,
    headers: {
      host: '127.0.0.1:8000',
      connection: 'keep-alive',
      'sec-ch-ua': '"Chromium";v="92", " Not A;Brand";v="99", "Google Chrome";v="92"',
      dnt: '1',
      'sec-ch-ua-mobile': '?0',
      'user-agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/92.0.4515.107 Safari/537.36',
      token: 'eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJ1c2VyIjp7ImlkIjoxNX0sImlhdCI6MTYyNzY1NTIzNiwiZXhwIjo4NjQxNjI3NjU1MjM2fQ.wbjS9_EWxa9TUz_G4xdAikcPbim0e5bvpedbL4cJ_3s',
      accept: '*/*',
      origin: 'http://localhost:3006',
      'sec-fetch-site': 'cross-site',
      'sec-fetch-mode': 'cors',
      'sec-fetch-dest': 'empty',
      referer: 'http://localhost:3006/',
      'accept-encoding': 'gzip, deflate, br',
      'accept-language': 'en-US,en;q=0.9,ta;q=0.8',
      'if-none-match': 'W/"769e-+G4TJFal4FZGVbZDMI5VVLNVq/U"'
    },
    rawHeaders: [
      'Host',
      '127.0.0.1:8000',
      'Connection',
      'keep-alive',
      'sec-ch-ua',
      '"Chromium";v="92", " Not A;Brand";v="99", "Google Chrome";v="92"',
      'DNT',
      '1',
      'sec-ch-ua-mobile',
      '?0',
      'User-Agent',
      'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/92.0.4515.107 Safari/537.36',
      'token',
      'eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJ1c2VyIjp7ImlkIjoxNX0sImlhdCI6MTYyNzY1NTIzNiwiZXhwIjo4NjQxNjI3NjU1MjM2fQ.wbjS9_EWxa9TUz_G4xdAikcPbim0e5bvpedbL4cJ_3s',
      'Accept',
      '*/*',
      'Origin',
      'http://localhost:3006',
      'Sec-Fetch-Site',
      'cross-site',
      'Sec-Fetch-Mode',
      'cors',
      'Sec-Fetch-Dest',
      'empty',
      'Referer',
      'http://localhost:3006/',
      'Accept-Encoding',
      'gzip, deflate, br',
      'Accept-Language',
      'en-US,en;q=0.9,ta;q=0.8',
      'If-None-Match',
      'W/"769e-+G4TJFal4FZGVbZDMI5VVLNVq/U"'
    ],
    trailers: {},
    rawTrailers: [],
    aborted: false,
    upgrade: false,
    url: '/assignment/get',
    method: 'GET',
    statusCode: null,
    statusMessage: null,
    client: Socket {
      connecting: false,
      _hadError: false,
      _parent: null,
      _host: null,
      _readableState: [ReadableState],
      readable: true,
      _events: [Object: null prototype],
      _eventsCount: 8,
      _maxListeners: undefined,
      _writableState: [WritableState],
      writable: true,
      allowHalfOpen: true,
      _sockname: null,
      _pendingData: null,
      _pendingEncoding: '',
      server: [Server],
      _server: [Server],
      timeout: 120000,
      parser: [HTTPParser],
      on: [Function: socketListenerWrap],
      addListener: [Function: socketListenerWrap],
      prependListener: [Function: socketListenerWrap],
      _paused: false,
      _httpMessage: [Circular],
      _peername: [Object],
      [Symbol(asyncId)]: 977,
      [Symbol(kHandle)]: [TCP],
      [Symbol(lastWriteQueueSize)]: 0,
      [Symbol(timeout)]: Timeout {
        _idleTimeout: 120000,
        _idlePrev: [TimersList],
        _idleNext: [TimersList],
        _idleStart: 245145,
        _onTimeout: [Function: bound ],
        _timerArgs: undefined,
        _repeat: null,
        _destroyed: false,
        [Symbol(refed)]: false,
        [Symbol(asyncId)]: 991,
        [Symbol(triggerId)]: 979
      },
      [Symbol(kBuffer)]: null,
      [Symbol(kBufferCb)]: null,
      [Symbol(kBufferGen)]: null,
      [Symbol(kCapture)]: false,
      [Symbol(kBytesRead)]: 0,
      [Symbol(kBytesWritten)]: 0
    },
    _consuming: false,
    _dumped: false,
    next: [Function: next],
    baseUrl: '/api/admin',
    originalUrl: '/api/admin/assignment/get',
    _parsedUrl: Url {
      protocol: null,
      slashes: null,
      auth: null,
      host: null,
      port: null,
      hostname: null,
      hash: null,
      search: null,
      query: null,
      pathname: '/assignment/get',
      path: '/assignment/get',
      href: '/assignment/get',
      _raw: '/assignment/get'
    },
    params: {},
    query: {},
    res: [Circular],
    body: {},
    _startAt: [ 35027, 42216000 ],
    _startTime: 2021-07-30T14:37:19.225Z,
    _remoteAddress: '::ffff:127.0.0.1',
    route: Route {
      path: '/assignment/get',
      stack: [Array],
      methods: [Object]
    },
    user: User {
      dataValues: [Object],
      _previousDataValues: [Object],
      _changed: Set {},
      _options: [Object],
      isNewRecord: false,
      Batch: null,
      Resume: null,
      HoldType: null,
      Skills: [],
      College: null,
      Deegree: null,
      IsaType: null
    },
    [Symbol(kCapture)]: false
  },
  locals: [Object: null prototype] {},
  _startAt: undefined,
  _startTime: undefined,
  writeHead: [Function: writeHead],
  __onFinished: [Function: listener] { queue: [ [Function: logRequest] ] },
  url: '/assignment/get',
  [Symbol(kCapture)]: false,
  [Symbol(kNeedDrain)]: false,
  [Symbol(corked)]: 0,
  [Symbol(kOutHeaders)]: [Object: null prototype] {
    'x-powered-by': [ 'X-Powered-By', 'Express' ],
    'access-control-allow-origin': [ 'Access-Control-Allow-Origin', '*' ]
  }
}
