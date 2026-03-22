#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E2080EDAE017B1B1.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3_1.h"

class Class_1_87F855E9737731A7;
class MainCityObjectState_ScriptConfig;
namespace MoleMole { class SceneObjectStateWidget; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Rendering::Universal::Internal { class SceneObjectProxy; }

#define CLASS_2_A0A6FF99ECEFAAC5_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x6F69880)
#define CLASS_2_A0A6FF99ECEFAAC5_METHOD_2_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x6F69B70)
#define CLASS_2_A0A6FF99ECEFAAC5_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x6F699A0)
#define CLASS_2_A0A6FF99ECEFAAC5_METHOD_2_56F437EC27DF16D8_OFFSET UNITYSDK_OFFSET(0x6F69B60)
#define CLASS_2_A0A6FF99ECEFAAC5_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x6F69AF0)
#define CLASS_2_A0A6FF99ECEFAAC5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6F69A90)
#define CLASS_2_A0A6FF99ECEFAAC5_METHOD_2_D88329B1DA27FF73_OFFSET UNITYSDK_OFFSET(0x6F69B50)
#define CLASS_2_A0A6FF99ECEFAAC5_METHOD_2_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x6F69A10)
#define CLASS_2_A0A6FF99ECEFAAC5__CTOR_OFFSET UNITYSDK_OFFSET(0x6F69760)

inline static constexpr unsigned int Class_2_A0A6FF99ECEFAAC5_TypeDefinitionIndex = 53498;

class Class_2_A0A6FF99ECEFAAC5 : public ::Class_1_E2080EDAE017B1B1
{
public:
	::MainCityObjectState_ScriptConfig* Field_2_0; // 0x38
	::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy* Field_2_1; // 0x40
	::Foundation::Coroutine::CoroutineHandle Field_2_2; // 0x48

	::System::Void _ctor(::Class_1_87F855E9737731A7* a1, ::MoleMole::SceneObjectStateWidget* a2, ::System::Action_1<::Struct_2_5B421F8FFABD4CA3_1>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87F855E9737731A7*, ::MoleMole::SceneObjectStateWidget*, ::System::Action_1<::Struct_2_5B421F8FFABD4CA3_1>*))((::PBYTE)hIl2Cpp + CLASS_2_A0A6FF99ECEFAAC5__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0A6FF99ECEFAAC5_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A0A6FF99ECEFAAC5_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0A6FF99ECEFAAC5_METHOD_2_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0A6FF99ECEFAAC5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0A6FF99ECEFAAC5_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_D88329B1DA27FF73(::MainCityObjectState_ScriptConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MainCityObjectState_ScriptConfig*))((::PBYTE)hIl2Cpp + CLASS_2_A0A6FF99ECEFAAC5_METHOD_2_D88329B1DA27FF73_OFFSET))(this, a1);
	}

	::MainCityObjectState_ScriptConfig* Method_2_56F437EC27DF16D8()
	{
		return ((::MainCityObjectState_ScriptConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0A6FF99ECEFAAC5_METHOD_2_56F437EC27DF16D8_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A0A6FF99ECEFAAC5_METHOD_2_2685B6183E614529_1_OFFSET))(this, a1);
	}
};
