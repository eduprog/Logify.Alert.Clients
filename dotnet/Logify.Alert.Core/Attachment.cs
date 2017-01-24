﻿using System.Collections.Generic;

namespace DevExpress.Logify.Core {
    public class Attachment {
        public string Name { get; set; }
        public string MimeType { get; set; }
        public byte[] Content { get; set; }
    }

    public class AttachmentCollection : List<Attachment> {
    }
}