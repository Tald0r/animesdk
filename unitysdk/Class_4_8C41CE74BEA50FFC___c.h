#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NapStreaming { class NapStreamingManager_StreamingPosProvider; }
namespace System { class Action; }

#define CLASS_4_8C41CE74BEA50FFC___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x784F740)
#define CLASS_4_8C41CE74BEA50FFC___C_METHOD_1_A7C25C16DAF12EC1_OFFSET UNITYSDK_OFFSET(0x784F700)
#define CLASS_4_8C41CE74BEA50FFC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x784F6B0)
#define CLASS_4_8C41CE74BEA50FFC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x784F6F0)

inline static constexpr unsigned int Class_4_8C41CE74BEA50FFC___c_TypeDefinitionIndex = 72161;

class Class_4_8C41CE74BEA50FFC___c : public ::System::Object
{
public:
	static ::Class_4_8C41CE74BEA50FFC___c** StaticGet___9()
	{
		return (::Class_4_8C41CE74BEA50FFC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_8C41CE74BEA50FFC___c_TypeDefinitionIndex)->GetStaticField(0x2DD00);
	}
	static ::NapStreaming::NapStreamingManager_StreamingPosProvider** StaticGet___9__4_1()
	{
		return (::NapStreaming::NapStreamingManager_StreamingPosProvider**)Il2CppClass::FromTypeDefinitionIndex(Class_4_8C41CE74BEA50FFC___c_TypeDefinitionIndex)->GetStaticField(0x2DD08);
	}
	static ::System::Action** StaticGet___9__2_4()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_4_8C41CE74BEA50FFC___c_TypeDefinitionIndex)->GetStaticField(0x2DD10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_8C41CE74BEA50FFC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8C41CE74BEA50FFC___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_A7C25C16DAF12EC1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8C41CE74BEA50FFC___C_METHOD_1_A7C25C16DAF12EC1_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8C41CE74BEA50FFC___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
