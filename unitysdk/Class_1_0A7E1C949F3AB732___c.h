#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_0A7E1C949F3AB732___C_METHOD_1_33DBDBB9A5DC3942_OFFSET UNITYSDK_OFFSET(0x64BB8C0)
#define CLASS_1_0A7E1C949F3AB732___C_METHOD_1_6150939D7C57528A_OFFSET UNITYSDK_OFFSET(0x64BB8A0)
#define CLASS_1_0A7E1C949F3AB732___C_METHOD_1_6C6FE6B6DCEB2431_1_OFFSET UNITYSDK_OFFSET(0x64BB8B0)
#define CLASS_1_0A7E1C949F3AB732___C_METHOD_1_6C6FE6B6DCEB2431_OFFSET UNITYSDK_OFFSET(0x64BB880)
#define CLASS_1_0A7E1C949F3AB732___C_METHOD_1_8047E14E3FC3F341_OFFSET UNITYSDK_OFFSET(0x64BB890)
#define CLASS_1_0A7E1C949F3AB732___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x64BB830)
#define CLASS_1_0A7E1C949F3AB732___C__CTOR_OFFSET UNITYSDK_OFFSET(0x64BB870)

inline static constexpr unsigned int Class_1_0A7E1C949F3AB732___c_TypeDefinitionIndex = 39948;

class Class_1_0A7E1C949F3AB732___c : public ::System::Object
{
public:
	static ::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>** StaticGet___9__13_5()
	{
		return (::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A7E1C949F3AB732___c_TypeDefinitionIndex)->GetStaticField(0x428B0);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__13_8()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A7E1C949F3AB732___c_TypeDefinitionIndex)->GetStaticField(0x428B8);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__13_10()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A7E1C949F3AB732___c_TypeDefinitionIndex)->GetStaticField(0x428C0);
	}
	static ::Class_1_0A7E1C949F3AB732___c** StaticGet___9()
	{
		return (::Class_1_0A7E1C949F3AB732___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A7E1C949F3AB732___c_TypeDefinitionIndex)->GetStaticField(0x428C8);
	}
	static ::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__13_1()
	{
		return (::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A7E1C949F3AB732___c_TypeDefinitionIndex)->GetStaticField(0x428D0);
	}
	static ::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__13_4()
	{
		return (::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A7E1C949F3AB732___c_TypeDefinitionIndex)->GetStaticField(0x428D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A7E1C949F3AB732___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7E1C949F3AB732___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6C6FE6B6DCEB2431(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_0A7E1C949F3AB732___C_METHOD_1_6C6FE6B6DCEB2431_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8047E14E3FC3F341(::UnityEngine::RaycastHit a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_1_0A7E1C949F3AB732___C_METHOD_1_8047E14E3FC3F341_OFFSET))(this, a1);
	}

	::System::Void Method_1_6150939D7C57528A(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_0A7E1C949F3AB732___C_METHOD_1_6150939D7C57528A_OFFSET))(this, a1);
	}

	::System::Void Method_1_6C6FE6B6DCEB2431_1(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_0A7E1C949F3AB732___C_METHOD_1_6C6FE6B6DCEB2431_1_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_33DBDBB9A5DC3942()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7E1C949F3AB732___C_METHOD_1_33DBDBB9A5DC3942_OFFSET))(this);
	}
};
