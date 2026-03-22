#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NapStreaming { class NapStreamingManager_StreamingPosProvider; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_474F8DCAF16A784A___C_METHOD_1_D8299432719B3C68_OFFSET UNITYSDK_OFFSET(0xDDEDA60)
#define CLASS_3_474F8DCAF16A784A___C_METHOD_1_F38398C364AE5340_OFFSET UNITYSDK_OFFSET(0xDDED700)
#define CLASS_3_474F8DCAF16A784A___C_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xDDEDAC0)
#define CLASS_3_474F8DCAF16A784A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDDED6B0)
#define CLASS_3_474F8DCAF16A784A___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDDED6F0)

inline static constexpr unsigned int Class_3_474F8DCAF16A784A___c_TypeDefinitionIndex = 51924;

class Class_3_474F8DCAF16A784A___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>** StaticGet___9__53_1()
	{
		return (::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_474F8DCAF16A784A___c_TypeDefinitionIndex)->GetStaticField(0x3C850);
	}
	static ::System::Action** StaticGet___9__37_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_474F8DCAF16A784A___c_TypeDefinitionIndex)->GetStaticField(0x3C858);
	}
	static ::Class_3_474F8DCAF16A784A___c** StaticGet___9()
	{
		return (::Class_3_474F8DCAF16A784A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_474F8DCAF16A784A___c_TypeDefinitionIndex)->GetStaticField(0x3C860);
	}
	static ::NapStreaming::NapStreamingManager_StreamingPosProvider** StaticGet___9__50_0()
	{
		return (::NapStreaming::NapStreamingManager_StreamingPosProvider**)Il2CppClass::FromTypeDefinitionIndex(Class_3_474F8DCAF16A784A___c_TypeDefinitionIndex)->GetStaticField(0x3C868);
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

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_3_474F8DCAF16A784A___C_METHOD_1_D8299432719B3C68_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_474F8DCAF16A784A___C_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}
};
