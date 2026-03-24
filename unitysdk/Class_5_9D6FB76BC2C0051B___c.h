#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NapStreaming { class NapStreamingManager_StreamingPosProvider; }
namespace System { class Action; }

#define CLASS_5_9D6FB76BC2C0051B___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x9246A10)
#define CLASS_5_9D6FB76BC2C0051B___C_METHOD_1_A7C25C16DAF12EC1_OFFSET UNITYSDK_OFFSET(0x92469D0)
#define CLASS_5_9D6FB76BC2C0051B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9246980)
#define CLASS_5_9D6FB76BC2C0051B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x92469C0)

inline static constexpr unsigned int Class_5_9D6FB76BC2C0051B___c_TypeDefinitionIndex = 40081;

class Class_5_9D6FB76BC2C0051B___c : public ::System::Object
{
public:
	static ::Class_5_9D6FB76BC2C0051B___c** StaticGet___9()
	{
		return (::Class_5_9D6FB76BC2C0051B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_9D6FB76BC2C0051B___c_TypeDefinitionIndex)->GetStaticField(0x2CAF0);
	}
	static ::System::Action** StaticGet___9__2_4()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_5_9D6FB76BC2C0051B___c_TypeDefinitionIndex)->GetStaticField(0x2CAF8);
	}
	static ::NapStreaming::NapStreamingManager_StreamingPosProvider** StaticGet___9__4_1()
	{
		return (::NapStreaming::NapStreamingManager_StreamingPosProvider**)Il2CppClass::FromTypeDefinitionIndex(Class_5_9D6FB76BC2C0051B___c_TypeDefinitionIndex)->GetStaticField(0x2CB00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_9D6FB76BC2C0051B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_9D6FB76BC2C0051B___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_A7C25C16DAF12EC1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_9D6FB76BC2C0051B___C_METHOD_1_A7C25C16DAF12EC1_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_9D6FB76BC2C0051B___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
