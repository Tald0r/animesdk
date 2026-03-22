#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_ConfigLevelResultPerformEffect.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_3_D038308AD580B020___C_METHOD_1_E661BAEFA63CDC37_OFFSET UNITYSDK_OFFSET(0x9DE2640)
#define CLASS_3_D038308AD580B020___C_METHOD_1_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0x9DE08C0)
#define CLASS_3_D038308AD580B020___C_METHOD_1_F4700841222EB2DC_OFFSET UNITYSDK_OFFSET(0x9DE2630)
#define CLASS_3_D038308AD580B020___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9DE0870)
#define CLASS_3_D038308AD580B020___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9DE08B0)

inline static constexpr unsigned int Class_3_D038308AD580B020___c_TypeDefinitionIndex = 47380;

class Class_3_D038308AD580B020___c : public ::System::Object
{
public:
	static ::Class_3_D038308AD580B020___c** StaticGet___9()
	{
		return (::Class_3_D038308AD580B020___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D038308AD580B020___c_TypeDefinitionIndex)->GetStaticField(0x380C0);
	}
	static ::System::Action** StaticGet___9__102_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D038308AD580B020___c_TypeDefinitionIndex)->GetStaticField(0x380C8);
	}
	static ::System::Comparison_1<::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect>** StaticGet___9__52_0()
	{
		return (::System::Comparison_1<::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D038308AD580B020___c_TypeDefinitionIndex)->GetStaticField(0x380D0);
	}
	static ::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__27_0()
	{
		return (::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D038308AD580B020___c_TypeDefinitionIndex)->GetStaticField(0x380D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EBAB6A35C21A2A5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020___C_METHOD_1_EBAB6A35C21A2A5B_OFFSET))(this);
	}

	::System::Int32 Method_1_F4700841222EB2DC(::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect a1, ::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect, ::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020___C_METHOD_1_F4700841222EB2DC_OFFSET))(this, a1, a2);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_E661BAEFA63CDC37()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020___C_METHOD_1_E661BAEFA63CDC37_OFFSET))(this);
	}
};
