#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NapStreaming { class NapStreamingManager_StreamingPosProvider; }
namespace System { class Action; }

#define CLASS_3_474F8DCAF16A784A___C_METHOD_1_F38398C364AE5340_OFFSET UNITYSDK_OFFSET(0xA865930)
#define CLASS_3_474F8DCAF16A784A___C_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xA865C90)
#define CLASS_3_474F8DCAF16A784A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA8658E0)
#define CLASS_3_474F8DCAF16A784A___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA865920)

inline static constexpr unsigned int Class_3_474F8DCAF16A784A___c_TypeDefinitionIndex = 44757;

class Class_3_474F8DCAF16A784A___c : public ::System::Object
{
public:
	static ::Class_3_474F8DCAF16A784A___c** StaticGet___9()
	{
		return (::Class_3_474F8DCAF16A784A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_474F8DCAF16A784A___c_TypeDefinitionIndex)->GetStaticField(0x36330);
	}
	static ::System::Action** StaticGet___9__37_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_474F8DCAF16A784A___c_TypeDefinitionIndex)->GetStaticField(0x36338);
	}
	static ::NapStreaming::NapStreamingManager_StreamingPosProvider** StaticGet___9__50_0()
	{
		return (::NapStreaming::NapStreamingManager_StreamingPosProvider**)Il2CppClass::FromTypeDefinitionIndex(Class_3_474F8DCAF16A784A___c_TypeDefinitionIndex)->GetStaticField(0x36340);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_474F8DCAF16A784A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_474F8DCAF16A784A___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_F38398C364AE5340()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_474F8DCAF16A784A___C_METHOD_1_F38398C364AE5340_OFFSET))(this);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_474F8DCAF16A784A___C_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}
};
