#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F969215F73192D65;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_1A72DD1162C34957_CLASS_1_8CBF3FB302C57B34_METHOD_1_0C490FF1F071E8D4_OFFSET UNITYSDK_OFFSET(0x6644510)
#define CLASS_1_1A72DD1162C34957_CLASS_1_8CBF3FB302C57B34__CTOR_OFFSET UNITYSDK_OFFSET(0x6644500)

inline static constexpr unsigned int Class_1_1A72DD1162C34957_Class_1_8CBF3FB302C57B34_TypeDefinitionIndex = 66120;

class Class_1_1A72DD1162C34957_Class_1_8CBF3FB302C57B34 : public ::System::Object
{
public:
	::System::Action_1<::Class_1_F969215F73192D65*>* Field_1_3; // 0x10
	::System::Action_1<::System::Single>* Field_1_0; // 0x18
	::System::Single Field_1_1; // 0x20
	::System::Int32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A72DD1162C34957_CLASS_1_8CBF3FB302C57B34__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0C490FF1F071E8D4(::Class_1_F969215F73192D65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F969215F73192D65*))((::PBYTE)hIl2Cpp + CLASS_1_1A72DD1162C34957_CLASS_1_8CBF3FB302C57B34_METHOD_1_0C490FF1F071E8D4_OFFSET))(this, a1);
	}
};
