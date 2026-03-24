#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_2_A8F5ABF31E066ED4;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_A8F5ABF31E066ED4_CLASS_1_4AA87076A69407DE_METHOD_1_813E0CE92283C107_OFFSET UNITYSDK_OFFSET(0x71DA5F0)
#define CLASS_2_A8F5ABF31E066ED4_CLASS_1_4AA87076A69407DE__CTOR_OFFSET UNITYSDK_OFFSET(0x71DA5E0)

inline static constexpr unsigned int Class_2_A8F5ABF31E066ED4_Class_1_4AA87076A69407DE_TypeDefinitionIndex = 70516;

class Class_2_A8F5ABF31E066ED4_Class_1_4AA87076A69407DE : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* Field_1_1; // 0x10
	::Class_2_A8F5ABF31E066ED4* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_CLASS_1_4AA87076A69407DE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_813E0CE92283C107(::Foundation::AssetRequestHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_CLASS_1_4AA87076A69407DE_METHOD_1_813E0CE92283C107_OFFSET))(this, a1);
	}
};
