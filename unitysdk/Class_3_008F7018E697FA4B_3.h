#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3FA12F979A3713A3.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIThreeDMapElement_BigSceneStoreContext; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define CLASS_3_008F7018E697FA4B_3_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x6FF6660)
#define CLASS_3_008F7018E697FA4B_3_METHOD_3_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x6FF6520)
#define CLASS_3_008F7018E697FA4B_3_METHOD_3_B79D80B665810DA3_OFFSET UNITYSDK_OFFSET(0x6FF6610)
#define CLASS_3_008F7018E697FA4B_3_METHOD_3_E9DD3ECB433053C3_OFFSET UNITYSDK_OFFSET(0x6FF6330)
#define CLASS_3_008F7018E697FA4B_3__CTOR_OFFSET UNITYSDK_OFFSET(0x6FF65B0)

inline static constexpr unsigned int Class_3_008F7018E697FA4B_3_TypeDefinitionIndex = 68758;

class Class_3_008F7018E697FA4B_3 : public ::Class_2_3FA12F979A3713A3<::MoleMole::UIThreeDMapElement_BigSceneStoreContext*>
{
public:
	::UnityEngine::RectTransform* Field_3_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_008F7018E697FA4B_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_E9DD3ECB433053C3(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_3_008F7018E697FA4B_3_METHOD_3_E9DD3ECB433053C3_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_008F7018E697FA4B_3_METHOD_3_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_3_B79D80B665810DA3(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_3_008F7018E697FA4B_3_METHOD_3_B79D80B665810DA3_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_008F7018E697FA4B_3_METHOD_3_126AB3935214AA22_OFFSET))(this);
	}
};
