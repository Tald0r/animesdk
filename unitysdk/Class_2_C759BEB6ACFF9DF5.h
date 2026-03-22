#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C759BEB6ACFF9DF5_Struct_2_18E794CDBE104DC1_3.h"
#include "unitysdk/Foundation/ObjectHandle.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/Variable_2.h"
#include "unitysdk/MoleMole/InLevelChatConfig.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceContext.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8DC4A6B2DA67EF18;
class Class_1_BC9D27E6028F322B;
class Class_1_F73E20E687FE8961;
namespace Foundation { template <typename T> class ObjectProxy_1; }
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera::CameraSequence { template <typename T> class ICameraSequenceCollection_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_C759BEB6ACFF9DF5_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x755EA30)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_098499348BBE0FC2_OFFSET UNITYSDK_OFFSET(0x755FCA0)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_0F7914BAC50D592C_OFFSET UNITYSDK_OFFSET(0x755DA20)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_156F124EBBC07B6C_OFFSET UNITYSDK_OFFSET(0x755F5E0)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_1CFA9C02CDDB465F_OFFSET UNITYSDK_OFFSET(0x755EAF0)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_1D2E0D34E5B80FE9_OFFSET UNITYSDK_OFFSET(0x755EB70)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x755EF70)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0x755F660)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_1D4018D4200358D0_3_OFFSET UNITYSDK_OFFSET(0x755F6E0)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_1D4018D4200358D0_4_OFFSET UNITYSDK_OFFSET(0x75604C0)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x755EE80)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_20CB55310DA00017_OFFSET UNITYSDK_OFFSET(0x755EF00)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_259B533085E399D3_OFFSET UNITYSDK_OFFSET(0x755F100)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_431B41F82025C3EE_OFFSET UNITYSDK_OFFSET(0x755F440)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_6AA2F81454ABF5E6_OFFSET UNITYSDK_OFFSET(0x755F180)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_6F43967B8D6CC421_OFFSET UNITYSDK_OFFSET(0x7560540)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_70662636528151D7_OFFSET UNITYSDK_OFFSET(0x755ED00)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_7236406DEAB1525A_OFFSET UNITYSDK_OFFSET(0x755E1A0)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_7CBB9F8EEB9CA1D3_OFFSET UNITYSDK_OFFSET(0x755C050)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_A41A4126E09888A8_OFFSET UNITYSDK_OFFSET(0x755EC40)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_C12DBE468567E77A_OFFSET UNITYSDK_OFFSET(0x755EAA0)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_C4B97B51666ED6D0_OFFSET UNITYSDK_OFFSET(0x755EB30)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_CFAC03C3080DD000_1_OFFSET UNITYSDK_OFFSET(0x755FBB0)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_CFAC03C3080DD000_OFFSET UNITYSDK_OFFSET(0x755F010)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x755EFF0)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_EFD899C616187CA8_OFFSET UNITYSDK_OFFSET(0x755EC00)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x755EC20)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_F3AA553D0BC36777_OFFSET UNITYSDK_OFFSET(0x755F760)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x755BAE0)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_F78C032061CEA1F7_OFFSET UNITYSDK_OFFSET(0x755E780)
#define CLASS_2_C759BEB6ACFF9DF5_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x7560420)
#define CLASS_2_C759BEB6ACFF9DF5_RELEASE_OFFSET UNITYSDK_OFFSET(0x755E980)
#define CLASS_2_C759BEB6ACFF9DF5__CCTOR_OFFSET UNITYSDK_OFFSET(0x755EBA0)
#define CLASS_2_C759BEB6ACFF9DF5__CTOR_OFFSET UNITYSDK_OFFSET(0x755BB00)

inline static constexpr unsigned int Class_2_C759BEB6ACFF9DF5_TypeDefinitionIndex = 74752;

class Class_2_C759BEB6ACFF9DF5 : public ::PipelineCamera::CameraSequence::CameraSequenceContext
{
public:
	static ::Foundation::Unreal::FName* StaticGet_Field_2_6()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C759BEB6ACFF9DF5_TypeDefinitionIndex)->GetStaticField(0x11460);
	}
	// static const ::System::Single Field_2_7; // 0x0
	::Class_1_8DC4A6B2DA67EF18* Field_2_4; // 0x60
	::System::Action_1<::Class_2_C759BEB6ACFF9DF5_Struct_2_18E794CDBE104DC1_3>* Field_2_2; // 0x68
	::Foundation::Variable_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>> Field_2_8; // 0x70
	::Class_1_F73E20E687FE8961* Field_2_0; // 0xB0
	::Nap::NapECS::EcsWorld* Field_2_11; // 0xB8
	::Foundation::ObjectProxy_1<::Class_2_C759BEB6ACFF9DF5*>* Field_2_3; // 0xC0
	::System::Single Field_2_10; // 0xC8
	::System::UInt32 Field_2_9; // 0xCC
	::MoleMole::InLevelChatConfig Field_2_1; // 0xD0
	::PipelineCamera::WorldBasicCameraData Field_2_14; // 0xDC
	::System::Boolean Field_2_12; // 0x108
	::System::Boolean Field_2_13; // 0x109
	::Class_2_C759BEB6ACFF9DF5_Struct_2_18E794CDBE104DC1_3 Field_2_5; // 0x10A

	::System::Void _ctor(::Class_1_F73E20E687FE8961* a1, ::MoleMole::InLevelChatConfig a2, ::System::UInt32 a3, ::System::Single a4, ::Nap::NapECS::EcsWorld* a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F73E20E687FE8961*, ::MoleMole::InLevelChatConfig, ::System::UInt32, ::System::Single, ::Nap::NapECS::EcsWorld*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5__CCTOR_OFFSET))();
	}

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_2_7CBB9F8EEB9CA1D3(::System::Nullable_1<::System::Boolean> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_7CBB9F8EEB9CA1D3_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0F7914BAC50D592C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_0F7914BAC50D592C_OFFSET))(this);
	}

	::System::Boolean Method_2_F78C032061CEA1F7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_F78C032061CEA1F7_OFFSET))(this);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_RELEASE_OFFSET))(this);
	}

	::Foundation::ObjectHandle get_Handle()
	{
		return ((::Foundation::ObjectHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_GET_HANDLE_OFFSET))(this);
	}

	::System::Void Method_2_C12DBE468567E77A(::PipelineCamera::WorldBasicCameraData& a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_C12DBE468567E77A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1CFA9C02CDDB465F(::System::Func_1<::PipelineCamera::WorldBasicCameraData>* a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_1CFA9C02CDDB465F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C4B97B51666ED6D0(::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>* a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_C4B97B51666ED6D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1D2E0D34E5B80FE9(::MoleMole::Cameras::CameraTrackBlending* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_1D2E0D34E5B80FE9_OFFSET))(this, a1);
	}

	::System::Action* Method_2_EFD899C616187CA8()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_EFD899C616187CA8_OFFSET))(this);
	}

	::System::Void Method_2_7236406DEAB1525A(::PipelineCamera::CameraCommandSpawnSubModules*& a1, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_7236406DEAB1525A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_A41A4126E09888A8(::PipelineCamera::WorldBasicCameraData& a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_A41A4126E09888A8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_70662636528151D7(::Class_1_BC9D27E6028F322B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BC9D27E6028F322B*))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_70662636528151D7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_2_20CB55310DA00017(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_20CB55310DA00017_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Action* Method_2_CFAC03C3080DD000()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_CFAC03C3080DD000_OFFSET))(this);
	}

	::System::UInt32 Method_2_259B533085E399D3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_259B533085E399D3_OFFSET))(this);
	}

	static ::Class_2_C759BEB6ACFF9DF5* Method_2_6AA2F81454ABF5E6(::Class_1_F73E20E687FE8961* a1)
	{
		return ((::Class_2_C759BEB6ACFF9DF5*(*)(::Class_1_F73E20E687FE8961*))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_6AA2F81454ABF5E6_OFFSET))(a1);
	}

	::System::Single Method_2_431B41F82025C3EE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_431B41F82025C3EE_OFFSET))(this);
	}

	static ::PipelineCamera::CameraSequence::ICameraSequenceCollection_1<::PipelineCamera::WorldBasicCameraData>* Method_2_156F124EBBC07B6C()
	{
		return ((::PipelineCamera::CameraSequence::ICameraSequenceCollection_1<::PipelineCamera::WorldBasicCameraData>*(*)())((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_156F124EBBC07B6C_OFFSET))();
	}

	::System::Boolean Method_2_1D4018D4200358D0_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_1D4018D4200358D0_2_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_1D4018D4200358D0_3_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_2_F3AA553D0BC36777()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_F3AA553D0BC36777_OFFSET))(this);
	}

	::System::Action* Method_2_CFAC03C3080DD000_1()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_CFAC03C3080DD000_1_OFFSET))(this);
	}

	static ::System::Void Method_2_098499348BBE0FC2(::System::UInt32 a1, ::System::UInt32 a2, ::Nap::NapECS::EcsWorld* a3, ::System::Boolean& a4, ::System::Boolean& a5)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::Nap::NapECS::EcsWorld*, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_098499348BBE0FC2_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_1D4018D4200358D0_4_OFFSET))(this);
	}

	static ::MoleMole::InLevelChatConfig Method_2_6F43967B8D6CC421(::System::String* a1, ::MoleMole::InLevelChatConfig a2)
	{
		return ((::MoleMole::InLevelChatConfig(*)(::System::String*, ::MoleMole::InLevelChatConfig))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_METHOD_2_6F43967B8D6CC421_OFFSET))(a1, a2);
	}
};
