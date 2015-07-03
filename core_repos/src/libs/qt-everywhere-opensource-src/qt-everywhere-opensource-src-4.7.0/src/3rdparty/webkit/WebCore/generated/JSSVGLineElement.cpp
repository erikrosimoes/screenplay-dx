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

#include "JSSVGLineElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGAnimatedTransformList.h"
#include "JSSVGElement.h"
#include "JSSVGMatrix.h"
#include "JSSVGRect.h"
#include "JSSVGStringList.h"
#include "KURL.h"
#include "SVGElement.h"
#include "SVGLineElement.h"
#include "SVGStringList.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGLineElement);

/* Hash table */

static const HashTableValue JSSVGLineElementTableValues[17] =
{
    { "x1", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLineElementX1), (intptr_t)0 },
    { "y1", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLineElementY1), (intptr_t)0 },
    { "x2", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLineElementX2), (intptr_t)0 },
    { "y2", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLineElementY2), (intptr_t)0 },
    { "requiredFeatures", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLineElementRequiredFeatures), (intptr_t)0 },
    { "requiredExtensions", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLineElementRequiredExtensions), (intptr_t)0 },
    { "systemLanguage", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLineElementSystemLanguage), (intptr_t)0 },
    { "xmllang", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLineElementXmllang), (intptr_t)setJSSVGLineElementXmllang },
    { "xmlspace", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLineElementXmlspace), (intptr_t)setJSSVGLineElementXmlspace },
    { "externalResourcesRequired", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLineElementExternalResourcesRequired), (intptr_t)0 },
    { "className", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLineElementClassName), (intptr_t)0 },
    { "style", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLineElementStyle), (intptr_t)0 },
    { "transform", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLineElementTransform), (intptr_t)0 },
    { "nearestViewportElement", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLineElementNearestViewportElement), (intptr_t)0 },
    { "farthestViewportElement", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLineElementFarthestViewportElement), (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLineElementConstructor), (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGLineElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 1023, JSSVGLineElementTableValues, 0 };
#else
    { 36, 31, JSSVGLineElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSSVGLineElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGLineElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGLineElementConstructorTableValues, 0 };
#else
    { 1, 0, JSSVGLineElementConstructorTableValues, 0 };
#endif

class JSSVGLineElementConstructor : public DOMConstructorObject {
public:
    JSSVGLineElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSSVGLineElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSSVGLineElementPrototype::self(exec, globalObject), None);
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

const ClassInfo JSSVGLineElementConstructor::s_info = { "SVGLineElementConstructor", 0, &JSSVGLineElementConstructorTable, 0 };

bool JSSVGLineElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGLineElementConstructor, DOMObject>(exec, &JSSVGLineElementConstructorTable, this, propertyName, slot);
}

bool JSSVGLineElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGLineElementConstructor, DOMObject>(exec, &JSSVGLineElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGLineElementPrototypeTableValues[7] =
{
    { "hasExtension", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsSVGLineElementPrototypeFunctionHasExtension), (intptr_t)1 },
    { "getPresentationAttribute", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsSVGLineElementPrototypeFunctionGetPresentationAttribute), (intptr_t)1 },
    { "getBBox", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsSVGLineElementPrototypeFunctionGetBBox), (intptr_t)0 },
    { "getCTM", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsSVGLineElementPrototypeFunctionGetCTM), (intptr_t)0 },
    { "getScreenCTM", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsSVGLineElementPrototypeFunctionGetScreenCTM), (intptr_t)0 },
    { "getTransformToElement", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsSVGLineElementPrototypeFunctionGetTransformToElement), (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGLineElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 2047, JSSVGLineElementPrototypeTableValues, 0 };
#else
    { 17, 15, JSSVGLineElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGLineElementPrototype::s_info = { "SVGLineElementPrototype", 0, &JSSVGLineElementPrototypeTable, 0 };

JSObject* JSSVGLineElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGLineElement>(exec, globalObject);
}

bool JSSVGLineElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGLineElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGLineElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGLineElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGLineElement::s_info = { "SVGLineElement", &JSSVGElement::s_info, &JSSVGLineElementTable, 0 };

JSSVGLineElement::JSSVGLineElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGLineElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

JSObject* JSSVGLineElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGLineElementPrototype(JSSVGLineElementPrototype::createStructure(JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGLineElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGLineElement, Base>(exec, &JSSVGLineElementTable, this, propertyName, slot);
}

bool JSSVGLineElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGLineElement, Base>(exec, &JSSVGLineElementTable, this, propertyName, descriptor);
}

JSValue jsSVGLineElementX1(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLineElement* castedThis = static_cast<JSSVGLineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->x1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGLineElementY1(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLineElement* castedThis = static_cast<JSSVGLineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->y1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGLineElementX2(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLineElement* castedThis = static_cast<JSSVGLineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->x2Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGLineElementY2(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLineElement* castedThis = static_cast<JSSVGLineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->y2Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGLineElementRequiredFeatures(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLineElement* castedThis = static_cast<JSSVGLineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->requiredFeatures()), imp);
    return result;
}

JSValue jsSVGLineElementRequiredExtensions(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLineElement* castedThis = static_cast<JSSVGLineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->requiredExtensions()), imp);
    return result;
}

JSValue jsSVGLineElementSystemLanguage(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLineElement* castedThis = static_cast<JSSVGLineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->systemLanguage()), imp);
    return result;
}

JSValue jsSVGLineElementXmllang(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLineElement* castedThis = static_cast<JSSVGLineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->xmllang());
    return result;
}

JSValue jsSVGLineElementXmlspace(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLineElement* castedThis = static_cast<JSSVGLineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->xmlspace());
    return result;
}

JSValue jsSVGLineElementExternalResourcesRequired(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLineElement* castedThis = static_cast<JSSVGLineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGLineElementClassName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLineElement* castedThis = static_cast<JSSVGLineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGLineElementStyle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLineElement* castedThis = static_cast<JSSVGLineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
    return result;
}

JSValue jsSVGLineElementTransform(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLineElement* castedThis = static_cast<JSSVGLineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThis->impl());
    RefPtr<SVGAnimatedTransformList> obj = imp->transformAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGLineElementNearestViewportElement(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLineElement* castedThis = static_cast<JSSVGLineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->nearestViewportElement()));
    return result;
}

JSValue jsSVGLineElementFarthestViewportElement(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLineElement* castedThis = static_cast<JSSVGLineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->farthestViewportElement()));
    return result;
}

JSValue jsSVGLineElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLineElement* domObject = static_cast<JSSVGLineElement*>(asObject(slotBase));
    return JSSVGLineElement::getConstructor(exec, domObject->globalObject());
}
void JSSVGLineElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGLineElement, Base>(exec, propertyName, value, &JSSVGLineElementTable, this, slot);
}

void setJSSVGLineElementXmllang(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGLineElement* castedThisObj = static_cast<JSSVGLineElement*>(thisObject);
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThisObj->impl());
    imp->setXmllang(value.toString(exec));
}

void setJSSVGLineElementXmlspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGLineElement* castedThisObj = static_cast<JSSVGLineElement*>(thisObject);
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThisObj->impl());
    imp->setXmlspace(value.toString(exec));
}

JSValue JSSVGLineElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGLineElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSValue JSC_HOST_CALL jsSVGLineElementPrototypeFunctionHasExtension(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGLineElement::s_info))
        return throwError(exec, TypeError);
    JSSVGLineElement* castedThisObj = static_cast<JSSVGLineElement*>(asObject(thisValue));
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThisObj->impl());
    const UString& extension = args.at(0).toString(exec);


    JSC::JSValue result = jsBoolean(imp->hasExtension(extension));
    return result;
}

JSValue JSC_HOST_CALL jsSVGLineElementPrototypeFunctionGetPresentationAttribute(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGLineElement::s_info))
        return throwError(exec, TypeError);
    JSSVGLineElement* castedThisObj = static_cast<JSSVGLineElement*>(asObject(thisValue));
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThisObj->impl());
    const UString& name = args.at(0).toString(exec);


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return result;
}

JSValue JSC_HOST_CALL jsSVGLineElementPrototypeFunctionGetBBox(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGLineElement::s_info))
        return throwError(exec, TypeError);
    JSSVGLineElement* castedThisObj = static_cast<JSSVGLineElement*>(asObject(thisValue));
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThisObj->impl());


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), JSSVGStaticPODTypeWrapper<FloatRect>::create(imp->getBBox()).get(), 0 /* no context on purpose */);
    return result;
}

JSValue JSC_HOST_CALL jsSVGLineElementPrototypeFunctionGetCTM(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGLineElement::s_info))
        return throwError(exec, TypeError);
    JSSVGLineElement* castedThisObj = static_cast<JSSVGLineElement*>(asObject(thisValue));
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThisObj->impl());


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), JSSVGStaticPODTypeWrapper<AffineTransform>::create(imp->getCTM()).get(), 0 /* no context on purpose */);
    return result;
}

JSValue JSC_HOST_CALL jsSVGLineElementPrototypeFunctionGetScreenCTM(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGLineElement::s_info))
        return throwError(exec, TypeError);
    JSSVGLineElement* castedThisObj = static_cast<JSSVGLineElement*>(asObject(thisValue));
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThisObj->impl());


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), JSSVGStaticPODTypeWrapper<AffineTransform>::create(imp->getScreenCTM()).get(), 0 /* no context on purpose */);
    return result;
}

JSValue JSC_HOST_CALL jsSVGLineElementPrototypeFunctionGetTransformToElement(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGLineElement::s_info))
        return throwError(exec, TypeError);
    JSSVGLineElement* castedThisObj = static_cast<JSSVGLineElement*>(asObject(thisValue));
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    SVGElement* element = toSVGElement(args.at(0));


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), JSSVGStaticPODTypeWrapper<AffineTransform>::create(imp->getTransformToElement(element, ec)).get(), 0 /* no context on purpose */);
    setDOMException(exec, ec);
    return result;
}


}

#endif // ENABLE(SVG)
