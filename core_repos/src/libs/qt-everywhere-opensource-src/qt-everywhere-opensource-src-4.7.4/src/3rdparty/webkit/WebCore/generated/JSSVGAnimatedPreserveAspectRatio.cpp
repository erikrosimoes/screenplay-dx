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

#if ENABLE(SVG)

#include "JSSVGAnimatedPreserveAspectRatio.h"

#include "JSSVGPreserveAspectRatio.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGAnimatedPreserveAspectRatio);

/* Hash table */

static const HashTableValue JSSVGAnimatedPreserveAspectRatioTableValues[4] =
{
    { "baseVal", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedPreserveAspectRatioBaseVal), (intptr_t)0 },
    { "animVal", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedPreserveAspectRatioAnimVal), (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedPreserveAspectRatioConstructor), (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedPreserveAspectRatioTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 3, JSSVGAnimatedPreserveAspectRatioTableValues, 0 };
#else
    { 8, 7, JSSVGAnimatedPreserveAspectRatioTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSSVGAnimatedPreserveAspectRatioConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedPreserveAspectRatioConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGAnimatedPreserveAspectRatioConstructorTableValues, 0 };
#else
    { 1, 0, JSSVGAnimatedPreserveAspectRatioConstructorTableValues, 0 };
#endif

class JSSVGAnimatedPreserveAspectRatioConstructor : public DOMConstructorObject {
public:
    JSSVGAnimatedPreserveAspectRatioConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSSVGAnimatedPreserveAspectRatioConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSSVGAnimatedPreserveAspectRatioPrototype::self(exec, globalObject), None);
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

const ClassInfo JSSVGAnimatedPreserveAspectRatioConstructor::s_info = { "SVGAnimatedPreserveAspectRatioConstructor", 0, &JSSVGAnimatedPreserveAspectRatioConstructorTable, 0 };

bool JSSVGAnimatedPreserveAspectRatioConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimatedPreserveAspectRatioConstructor, DOMObject>(exec, &JSSVGAnimatedPreserveAspectRatioConstructorTable, this, propertyName, slot);
}

bool JSSVGAnimatedPreserveAspectRatioConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGAnimatedPreserveAspectRatioConstructor, DOMObject>(exec, &JSSVGAnimatedPreserveAspectRatioConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGAnimatedPreserveAspectRatioPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedPreserveAspectRatioPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGAnimatedPreserveAspectRatioPrototypeTableValues, 0 };
#else
    { 1, 0, JSSVGAnimatedPreserveAspectRatioPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGAnimatedPreserveAspectRatioPrototype::s_info = { "SVGAnimatedPreserveAspectRatioPrototype", 0, &JSSVGAnimatedPreserveAspectRatioPrototypeTable, 0 };

JSObject* JSSVGAnimatedPreserveAspectRatioPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAnimatedPreserveAspectRatio>(exec, globalObject);
}

const ClassInfo JSSVGAnimatedPreserveAspectRatio::s_info = { "SVGAnimatedPreserveAspectRatio", 0, &JSSVGAnimatedPreserveAspectRatioTable, 0 };

JSSVGAnimatedPreserveAspectRatio::JSSVGAnimatedPreserveAspectRatio(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGAnimatedPreserveAspectRatio> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSSVGAnimatedPreserveAspectRatio::~JSSVGAnimatedPreserveAspectRatio()
{
    forgetDOMObject(this, impl());
    JSSVGContextCache::forgetWrapper(this);
}

JSObject* JSSVGAnimatedPreserveAspectRatio::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGAnimatedPreserveAspectRatioPrototype(JSSVGAnimatedPreserveAspectRatioPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSSVGAnimatedPreserveAspectRatio::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimatedPreserveAspectRatio, Base>(exec, &JSSVGAnimatedPreserveAspectRatioTable, this, propertyName, slot);
}

bool JSSVGAnimatedPreserveAspectRatio::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGAnimatedPreserveAspectRatio, Base>(exec, &JSSVGAnimatedPreserveAspectRatioTable, this, propertyName, descriptor);
}

JSValue jsSVGAnimatedPreserveAspectRatioBaseVal(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimatedPreserveAspectRatio* castedThis = static_cast<JSSVGAnimatedPreserveAspectRatio*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAnimatedPreserveAspectRatio* imp = static_cast<SVGAnimatedPreserveAspectRatio*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), JSSVGDynamicPODTypeWrapperCache<SVGPreserveAspectRatio, SVGAnimatedPreserveAspectRatio>::lookupOrCreateWrapper(imp, &SVGAnimatedPreserveAspectRatio::baseVal, &SVGAnimatedPreserveAspectRatio::setBaseVal).get(), JSSVGContextCache::svgContextForDOMObject(castedThis));;
    return result;
}

JSValue jsSVGAnimatedPreserveAspectRatioAnimVal(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimatedPreserveAspectRatio* castedThis = static_cast<JSSVGAnimatedPreserveAspectRatio*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAnimatedPreserveAspectRatio* imp = static_cast<SVGAnimatedPreserveAspectRatio*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), JSSVGDynamicPODTypeWrapperCache<SVGPreserveAspectRatio, SVGAnimatedPreserveAspectRatio>::lookupOrCreateWrapper(imp, &SVGAnimatedPreserveAspectRatio::animVal, &SVGAnimatedPreserveAspectRatio::setAnimVal).get(), JSSVGContextCache::svgContextForDOMObject(castedThis));;
    return result;
}

JSValue jsSVGAnimatedPreserveAspectRatioConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimatedPreserveAspectRatio* domObject = static_cast<JSSVGAnimatedPreserveAspectRatio*>(asObject(slotBase));
    return JSSVGAnimatedPreserveAspectRatio::getConstructor(exec, domObject->globalObject());
}
JSValue JSSVGAnimatedPreserveAspectRatio::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGAnimatedPreserveAspectRatioConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGAnimatedPreserveAspectRatio* object, SVGElement* context)
{
    return getDOMObjectWrapper<JSSVGAnimatedPreserveAspectRatio>(exec, globalObject, object, context);
}
SVGAnimatedPreserveAspectRatio* toSVGAnimatedPreserveAspectRatio(JSC::JSValue value)
{
    return value.inherits(&JSSVGAnimatedPreserveAspectRatio::s_info) ? static_cast<JSSVGAnimatedPreserveAspectRatio*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
