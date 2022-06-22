/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#pragma once

#include "JSDOMConvertDictionary.h"
#include "JSDOMWrapper.h"
#include "JSEvent.h"
#include "MessageEvent.h"

namespace WebCore {

class JSMessageEvent : public JSEvent {
public:
    using Base = JSEvent;
    using DOMWrapped = MessageEvent;
    static JSMessageEvent* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, Ref<MessageEvent>&& impl)
    {
        JSMessageEvent* ptr = new (NotNull, JSC::allocateCell<JSMessageEvent>(globalObject->vm())) JSMessageEvent(structure, *globalObject, WTFMove(impl));
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSDOMGlobalObject&);
    static JSC::JSObject* prototype(JSC::VM&, JSDOMGlobalObject&);
    static size_t estimatedSize(JSCell*, JSC::VM&);

    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::JSType(JSEventType), StructureFlags), info(), JSC::NonArray);
    }

    static JSC::JSValue getConstructor(JSC::VM&, const JSC::JSGlobalObject*);
    template<typename, JSC::SubspaceAccess mode> static JSC::GCClient::IsoSubspace* subspaceFor(JSC::VM& vm)
    {
        if constexpr (mode == JSC::SubspaceAccess::Concurrently)
            return nullptr;
        return subspaceForImpl(vm);
    }
    static JSC::GCClient::IsoSubspace* subspaceForImpl(JSC::VM& vm);
    DECLARE_VISIT_CHILDREN;
    template<typename Visitor> void visitAdditionalChildren(Visitor&);

    template<typename Visitor> static void visitOutputConstraints(JSCell*, Visitor&);
    static void analyzeHeap(JSCell*, JSC::HeapAnalyzer&);

    // Custom attributes
    JSC::JSValue data(JSC::JSGlobalObject&) const;
    JSC::JSValue ports(JSC::JSGlobalObject&) const;
    MessageEvent& wrapped() const
    {
        return static_cast<MessageEvent&>(Base::wrapped());
    }
protected:
    JSMessageEvent(JSC::Structure*, JSDOMGlobalObject&, Ref<MessageEvent>&&);

    void finishCreation(JSC::VM&);
};

JSC::JSValue toJS(JSC::JSGlobalObject*, JSDOMGlobalObject*, MessageEvent&);
inline JSC::JSValue toJS(JSC::JSGlobalObject* lexicalGlobalObject, JSDOMGlobalObject* globalObject, MessageEvent* impl) { return impl ? toJS(lexicalGlobalObject, globalObject, *impl) : JSC::jsNull(); }
JSC::JSValue toJSNewlyCreated(JSC::JSGlobalObject*, JSDOMGlobalObject*, Ref<MessageEvent>&&);
inline JSC::JSValue toJSNewlyCreated(JSC::JSGlobalObject* lexicalGlobalObject, JSDOMGlobalObject* globalObject, RefPtr<MessageEvent>&& impl) { return impl ? toJSNewlyCreated(lexicalGlobalObject, globalObject, impl.releaseNonNull()) : JSC::jsNull(); }

template<> struct JSDOMWrapperConverterTraits<MessageEvent> {
    using WrapperClass = JSMessageEvent;
    using ToWrappedReturnType = MessageEvent*;
};
template<> MessageEvent::Init convertDictionary<MessageEvent::Init>(JSC::JSGlobalObject&, JSC::JSValue);


} // namespace WebCore