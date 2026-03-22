#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DAB41DAFBDB7AAF8_Struct_2_E9D871EB4F62E1AD.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_DAB41DAFBDB7AAF8;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Object; }

#define CLASS_1_DAB41DAFBDB7AAF8_CLASS_1_456B1735B09328D8_METHOD_1_65F273241BCD3CFD_OFFSET UNITYSDK_OFFSET(0xB14E600)
#define CLASS_1_DAB41DAFBDB7AAF8_CLASS_1_456B1735B09328D8__CTOR_OFFSET UNITYSDK_OFFSET(0xB14E5F0)

inline static constexpr unsigned int Class_1_DAB41DAFBDB7AAF8_Class_1_456B1735B09328D8_TypeDefinitionIndex = 57651;

class Class_1_DAB41DAFBDB7AAF8_Class_1_456B1735B09328D8 : public ::System::Object
{
public:
	::Class_1_DAB41DAFBDB7AAF8_Struct_2_E9D871EB4F62E1AD Field_1_0; // 0x10
	::Class_1_DAB41DAFBDB7AAF8* Field_1_1; // 0x40
	::System::Action_2<::System::Boolean, ::Class_1_DAB41DAFBDB7AAF8_Struct_2_E9D871EB4F62E1AD>* Field_1_3; // 0x48
	::System::Int32 Field_1_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAB41DAFBDB7AAF8_CLASS_1_456B1735B09328D8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_65F273241BCD3CFD(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_DAB41DAFBDB7AAF8_CLASS_1_456B1735B09328D8_METHOD_1_65F273241BCD3CFD_OFFSET))(this, a1, a2);
	}
};
