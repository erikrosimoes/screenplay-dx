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

#include "config.h"
#include "JSHTMLAppletElement.h"

#include "HTMLAppletElement.h"
#include "HTMLNames.h"
#include "JSHTMLAppletElementCustom.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLAppletElement);

/* Hash table */

static const HashTableValue JSHTMLAppletElementTableValues[13] =
{
    { "align", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAppletElementAlign), (intptr_t)setJSHTMLAppletElementAlign },
    { "alt", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAppletElementAlt), (intptr_t)setJSHTMLAppletElementAlt },
    { "archive", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAppletElementArchive), (intptr_t)setJSHTMLAppletElementArchive },
    { "code", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAppletElementCode), (intptr_t)setJSHTMLAppletElementCode },
    { "codeBase", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAppletElementCodeBase), (intptr_t)setJSHTMLAppletElementCodeBase },
    { "height", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAppletElementHeight), (intptr_t)setJSHTMLAppletElementHeight },
    { "hspace", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAppletElementHspace), (intptr_t)setJSHTMLAppletElementHspace },
    { "name", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAppletElementName), (intptr_t)setJSHTMLAppletElementName },
    { "object", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAppletElementObject), (intptr_t)setJSHTMLAppletElementObject },
    { "vspace", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAppletElementVspace), (intptr_t)setJSHTMLAppletElementVspace },
    { "width", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAppletElementWidth), (intptr_t)setJSHTMLAppletElementWidth },
    { "constructor", DontEnum|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAppletElementConstructor), (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLAppletElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 127, JSHTMLAppletElementTableValues, 0 };
#else
    { 35, 31, JSHTMLAppletElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSHTMLAppletElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLAppletElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLAppletElementConstructorTableValues, 0 };
#else
    { 1, 0, JSHTMLAppletElementConstructorTableValues, 0 };
#endif

class JSHTMLAppletElementConstructor : public DOMConstructorObject {
public:
    JSHTMLAppletElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSHTMLAppletElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSHTMLAppletElementPrototype::self(exec, globalObject), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual bool getOwnPropertyDescriptor(ExecState*, const Identifier&, PropertyDescriptor&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, StructureFlags), AnonymousSlotCount); 
    }
    
protected:
    static const unsigned StructureFlags = OverridesGetOwnPropertySlot | ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSHTMLAppletElementConstructor::s_info = { "HTMLAppletElementConstructor", 0, &JSHTMLAppletElementConstructorTable, 0 };

bool JSHTMLAppletElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLAppletElementConstructor, DOMObject>(exec, &JSHTMLAppletElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLAppletElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLAppletElementConstructor, DOMObject>(exec, &JSHTMLAppletElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLAppletElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLAppletElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLAppletElementPrototypeTableValues, 0 };
#else
    { 1, 0, JSHTMLAppletElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSHTMLAppletElementPrototype::s_info = { "HTMLAppletElementPrototype", 0, &JSHTMLAppletElementPrototypeTable, 0 };

JSObject* JSHTMLAppletElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLAppletElement>(exec, globalObject);
}

const ClassInfo JSHTMLAppletElement::s_info = { "HTMLAppletElement", &JSHTMLElement::s_info, &JSHTMLAppletElementTable, 0 };

JSHTMLAppletElement::JSHTMLAppletElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLAppletElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

JSObject* JSHTMLAppletElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLAppletElementPrototype(JSHTMLAppletElementPrototype::createStructure(JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLAppletElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    if (getOwnPropertySlotDelegate(exec, propertyName, slot))
        return true;
    return getStaticValueSlot<JSHTMLAppletElement, Base>(exec, &JSHTMLAppletElementTable, this, propertyName, slot);
}

bool JSHTMLAppletElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    if (getOwnPropertyDescriptorDelegate(exec, propertyName, descriptor))
        return true;
    return getStaticValueDescriptor<JSHTMLAppletElement, Base>(exec, &JSHTMLAppletElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLAppletElementAlign(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLAppletElement* castedThis = static_cast<JSHTMLAppletElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(HTMLNames::alignAttr));
    return result;
}

JSValue jsHTMLAppletElementAlt(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLAppletElement* castedThis = static_cast<JSHTMLAppletElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(HTMLNames::altAttr));
    return result;
}

JSValue jsHTMLAppletElementArchive(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLAppletElement* castedThis = static_cast<JSHTMLAppletElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(HTMLNames::archiveAttr));
    return result;
}

JSValue jsHTMLAppletElementCode(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLAppletElement* castedThis = static_cast<JSHTMLAppletElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(HTMLNames::codeAttr));
    return result;
}

JSValue jsHTMLAppletElementCodeBase(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLAppletElement* castedThis = static_cast<JSHTMLAppletElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(HTMLNames::codebaseAttr));
    return result;
}

JSValue jsHTMLAppletElementHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLAppletElement* castedThis = static_cast<JSHTMLAppletElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(HTMLNames::heightAttr));
    return result;
}

JSValue jsHTMLAppletElementHspace(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLAppletElement* castedThis = static_cast<JSHTMLAppletElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(HTMLNames::hspaceAttr));
    return result;
}

JSValue jsHTMLAppletElementName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLAppletElement* castedThis = static_cast<JSHTMLAppletElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(HTMLNames::nameAttr));
    return result;
}

JSValue jsHTMLAppletElementObject(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLAppletElement* castedThis = static_cast<JSHTMLAppletElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(HTMLNames::objectAttr));
    return result;
}

JSValue jsHTMLAppletElementVspace(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLAppletElement* castedThis = static_cast<JSHTMLAppletElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(HTMLNames::vspaceAttr));
    return result;
}

JSValue jsHTMLAppletElementWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLAppletElement* castedThis = static_cast<JSHTMLAppletElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(HTMLNames::widthAttr));
    return result;
}

JSValue jsHTMLAppletElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLAppletElement* domObject = static_cast<JSHTMLAppletElement*>(asObject(slotBase));
    return JSHTMLAppletElement::getConstructor(exec, domObject->globalObject());
}
void JSHTMLAppletElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    if (putDelegate(exec, propertyName, value, slot))
        return;
    lookupPut<JSHTMLAppletElement, Base>(exec, propertyName, value, &JSHTMLAppletElementTable, this, slot);
}

void setJSHTMLAppletElementAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLAppletElement* castedThisObj = static_cast<JSHTMLAppletElement*>(thisObject);
    HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(castedThisObj->impl());
    imp->setAttribute(HTMLNames::alignAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLAppletElementAlt(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLAppletElement* castedThisObj = static_cast<JSHTMLAppletElement*>(thisObject);
    HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(castedThisObj->impl());
    imp->setAttribute(HTMLNames::altAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLAppletElementArchive(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLAppletElement* castedThisObj = static_cast<JSHTMLAppletElement*>(thisObject);
    HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(castedThisObj->impl());
    imp->setAttribute(HTMLNames::archiveAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLAppletElementCode(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLAppletElement* castedThisObj = static_cast<JSHTMLAppletElement*>(thisObject);
    HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(castedThisObj->impl());
    imp->setAttribute(HTMLNames::codeAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLAppletElementCodeBase(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLAppletElement* castedThisObj = static_cast<JSHTMLAppletElement*>(thisObject);
    HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(castedThisObj->impl());
    imp->setAttribute(HTMLNames::codebaseAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLAppletElementHeight(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLAppletElement* castedThisObj = static_cast<JSHTMLAppletElement*>(thisObject);
    HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(castedThisObj->impl());
    imp->setAttribute(HTMLNames::heightAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLAppletElementHspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLAppletElement* castedThisObj = static_cast<JSHTMLAppletElement*>(thisObject);
    HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(castedThisObj->impl());
    imp->setAttribute(HTMLNames::hspaceAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLAppletElementName(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLAppletElement* castedThisObj = static_cast<JSHTMLAppletElement*>(thisObject);
    HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(castedThisObj->impl());
    imp->setAttribute(HTMLNames::nameAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLAppletElementObject(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLAppletElement* castedThisObj = static_cast<JSHTMLAppletElement*>(thisObject);
    HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(castedThisObj->impl());
    imp->setAttribute(HTMLNames::objectAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLAppletElementVspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLAppletElement* castedThisObj = static_cast<JSHTMLAppletElement*>(thisObject);
    HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(castedThisObj->impl());
    imp->setAttribute(HTMLNames::vspaceAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLAppletElementWidth(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLAppletElement* castedThisObj = static_cast<JSHTMLAppletElement*>(thisObject);
    HTMLAppletElement* imp = static_cast<HTMLAppletElement*>(castedThisObj->impl());
    imp->setAttribute(HTMLNames::widthAttr, valueToStringWithNullCheck(exec, value));
}

JSValue JSHTMLAppletElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLAppletElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}