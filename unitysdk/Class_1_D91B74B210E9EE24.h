#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DynamicBoneConfigMap;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D91B74B210E9EE24_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x8CB3620)
#define CLASS_1_D91B74B210E9EE24_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x8CB3420)
#define CLASS_1_D91B74B210E9EE24_METHOD_1_99C314E928ECAD17_OFFSET UNITYSDK_OFFSET(0x8CB3860)
#define CLASS_1_D91B74B210E9EE24_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x8CB3510)

inline static constexpr unsigned int Class_1_D91B74B210E9EE24_TypeDefinitionIndex = 51235;

class Class_1_D91B74B210E9EE24 : public ::System::Object
{
public:
	static ::DynamicBoneConfigMap** StaticGet_Field_1_0()
	{
		return (::DynamicBoneConfigMap**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D91B74B210E9EE24_TypeDefinitionIndex)->GetStaticField(0x37640);
	}

	static ::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D91B74B210E9EE24_METHOD_1_4DA6D4A624E42CAB_OFFSET))();
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D91B74B210E9EE24_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D91B74B210E9EE24_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::DynamicBoneConfigMap* Method_1_99C314E928ECAD17()
	{
		return ((::DynamicBoneConfigMap*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D91B74B210E9EE24_METHOD_1_99C314E928ECAD17_OFFSET))();
	}
};
