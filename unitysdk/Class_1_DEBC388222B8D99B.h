#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CameraShotData; }
namespace MoleMole::Cameras { class BangbooCameraEntry; }
namespace MoleMole::Cameras { class CameraOverrideTrackEntry; }
namespace MoleMole::Cameras { class ConfigCameraBangbooAdjustment; }
namespace MoleMole::Cameras { class ConfigCameraOverrideTrack; }
namespace MoleMole::Cameras { class DefaultFrameTwoShapeConfig; }
namespace MoleMole::Cameras { class FixedCameraConfig; }
namespace MoleMole::Config { class ConfigCameraCutsceneGroups; }
namespace MoleMole::Config { class ConfigCameraCutscenes; }
namespace MoleMole::Config { class ConfigCameraLockTargetBase; }
namespace MoleMole::Config { class ConfigCameraLockTargetDatas; }
namespace MoleMole::Config { class ConfigCameraPitchPolar; }
namespace MoleMole::Config { class ConfigCameraPitchPolars; }
namespace MoleMole::Config { class ConfigCameraScreenOffset; }
namespace MoleMole::Config { class ConfigCameraScreenOffsetDatas; }
namespace MoleMole::Config { class ConfigCameraShake; }
namespace MoleMole::Config { class ConfigCameraShakes; }
namespace MoleMole::Config { class ConfigCameraStory; }
namespace MoleMole::Config { class ConfigCameraStoryDatas; }
namespace MoleMole::Config { class ConfigCameraStretch; }
namespace MoleMole::Config { class ConfigCameraStretchs; }
namespace MoleMole::Config { class ConfigCameraZoom; }
namespace MoleMole::Config { class ConfigCameraZooms; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DEBC388222B8D99B_METHOD_1_05564BAA98DE4F7D_OFFSET UNITYSDK_OFFSET(0x76B7BD0)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_2E04E911EC2F4E81_1_OFFSET UNITYSDK_OFFSET(0x76B2880)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_2E04E911EC2F4E81_2_OFFSET UNITYSDK_OFFSET(0x76B3240)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_2E04E911EC2F4E81_3_OFFSET UNITYSDK_OFFSET(0x76B34E0)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_2E04E911EC2F4E81_4_OFFSET UNITYSDK_OFFSET(0x76B25E0)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_2E04E911EC2F4E81_5_OFFSET UNITYSDK_OFFSET(0x76B3790)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_2E04E911EC2F4E81_6_OFFSET UNITYSDK_OFFSET(0x76B2FA0)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_2E04E911EC2F4E81_OFFSET UNITYSDK_OFFSET(0x76B2B20)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_371255EB21BDD1E6_OFFSET UNITYSDK_OFFSET(0x76B6600)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_3BFF817575E8DECC_OFFSET UNITYSDK_OFFSET(0x76B5210)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_41F968BD43BAD855_OFFSET UNITYSDK_OFFSET(0x76B40C0)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_4434DBCBF65DA891_OFFSET UNITYSDK_OFFSET(0x76B81B0)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_45DA178CA5F6B5A3_OFFSET UNITYSDK_OFFSET(0x76B56D0)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_462986B061852E28_OFFSET UNITYSDK_OFFSET(0x76B24C0)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_4D11FA110316A313_OFFSET UNITYSDK_OFFSET(0x76B9080)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_5C460B446BE8E722_OFFSET UNITYSDK_OFFSET(0x76B5570)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_7413A83EDEE62A7C_OFFSET UNITYSDK_OFFSET(0x76B5850)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_7F03E08D216479FC_OFFSET UNITYSDK_OFFSET(0x76B7EC0)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_8479F94F0BB0031B_OFFSET UNITYSDK_OFFSET(0x76B7490)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_8533906206528A21_OFFSET UNITYSDK_OFFSET(0x76B8F10)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_8E2C129DE4FC3609_1_OFFSET UNITYSDK_OFFSET(0x76B2DC0)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x76B22E0)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_A09A55886BD7EC21_OFFSET UNITYSDK_OFFSET(0x76B8480)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_A69C40386AAEA673_OFFSET UNITYSDK_OFFSET(0x76B4C40)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_AEE30FF405110201_OFFSET UNITYSDK_OFFSET(0x76845B0)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_B508FD1F30805E9B_1_OFFSET UNITYSDK_OFFSET(0x76B3A40)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_B508FD1F30805E9B_OFFSET UNITYSDK_OFFSET(0x76B3D80)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_B87197B4FFFA424C_OFFSET UNITYSDK_OFFSET(0x76B4960)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_BC14952E78E734C8_OFFSET UNITYSDK_OFFSET(0x76B4220)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_BFA3B46E9E2A71F0_OFFSET UNITYSDK_OFFSET(0x76B8D20)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_D089533F2507FC5C_OFFSET UNITYSDK_OFFSET(0x76B5370)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_D7BA65B1BBDE51E0_OFFSET UNITYSDK_OFFSET(0x76B5F90)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_DCCA26CCDF96182C_OFFSET UNITYSDK_OFFSET(0x76B8320)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_DE1A3FCF34CD80AB_OFFSET UNITYSDK_OFFSET(0x76B6D40)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_E8615CCA6AACA8F5_OFFSET UNITYSDK_OFFSET(0x76B4AE0)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_F01A4601A77AB111_OFFSET UNITYSDK_OFFSET(0x76B85E0)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_F96084E8117BDB3C_OFFSET UNITYSDK_OFFSET(0x76B9540)
#define CLASS_1_DEBC388222B8D99B_METHOD_1_FF32C7746B81CE01_OFFSET UNITYSDK_OFFSET(0x76B7030)
#define CLASS_1_DEBC388222B8D99B__CCTOR_OFFSET UNITYSDK_OFFSET(0x76B2190)

inline static constexpr unsigned int Class_1_DEBC388222B8D99B_TypeDefinitionIndex = 68324;

class Class_1_DEBC388222B8D99B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::CameraOverrideTrackEntry*>** StaticGet_Field_1_10()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::CameraOverrideTrackEntry*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DEBC388222B8D99B_TypeDefinitionIndex)->GetStaticField(0x3C1B0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraShake*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraShake*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DEBC388222B8D99B_TypeDefinitionIndex)->GetStaticField(0x3C1B8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraScreenOffset*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraScreenOffset*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DEBC388222B8D99B_TypeDefinitionIndex)->GetStaticField(0x3C1C0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraStretch*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraStretch*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DEBC388222B8D99B_TypeDefinitionIndex)->GetStaticField(0x3C1C8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraPitchPolar*>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraPitchPolar*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DEBC388222B8D99B_TypeDefinitionIndex)->GetStaticField(0x3C1D0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraZoom*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraZoom*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DEBC388222B8D99B_TypeDefinitionIndex)->GetStaticField(0x3C1D8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraStory*>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraStory*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DEBC388222B8D99B_TypeDefinitionIndex)->GetStaticField(0x3C1E0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_Field_1_8()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DEBC388222B8D99B_TypeDefinitionIndex)->GetStaticField(0x3C1E8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CameraShotData*>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CameraShotData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DEBC388222B8D99B_TypeDefinitionIndex)->GetStaticField(0x3C1F0);
	}
	static ::MoleMole::Config::ConfigCameraStoryDatas** StaticGet_Field_1_9()
	{
		return (::MoleMole::Config::ConfigCameraStoryDatas**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DEBC388222B8D99B_TypeDefinitionIndex)->GetStaticField(0x3C1F8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraLockTargetBase*>** StaticGet_Field_1_5()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraLockTargetBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DEBC388222B8D99B_TypeDefinitionIndex)->GetStaticField(0x3C200);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::BangbooCameraEntry*>** StaticGet_Field_1_11()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::BangbooCameraEntry*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DEBC388222B8D99B_TypeDefinitionIndex)->GetStaticField(0x3C208);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_462986B061852E28(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_462986B061852E28_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigCameraScreenOffset* Method_1_41F968BD43BAD855(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigCameraScreenOffset*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_41F968BD43BAD855_OFFSET))(a1);
	}

	static ::System::Void Method_1_BC14952E78E734C8(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraScreenOffsetDatas*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraScreenOffsetDatas*>*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_BC14952E78E734C8_OFFSET))(a1);
	}

	static ::System::Void Method_1_2E04E911EC2F4E81(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_2E04E911EC2F4E81_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B508FD1F30805E9B(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_B508FD1F30805E9B_OFFSET))(a1, a2);
	}

	static ::MoleMole::Cameras::BangbooCameraEntry* Method_1_B87197B4FFFA424C(::System::String* a1, ::System::String*& a2)
	{
		return ((::MoleMole::Cameras::BangbooCameraEntry*(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_B87197B4FFFA424C_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigCameraZoom* Method_1_E8615CCA6AACA8F5(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigCameraZoom*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_E8615CCA6AACA8F5_OFFSET))(a1);
	}

	static ::System::Void Method_1_A69C40386AAEA673(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraShakes*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraShakes*>*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_A69C40386AAEA673_OFFSET))(a1);
	}

	static ::MoleMole::Config::ConfigCameraPitchPolar* Method_1_3BFF817575E8DECC(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigCameraPitchPolar*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_3BFF817575E8DECC_OFFSET))(a1);
	}

	static ::MoleMole::Cameras::DefaultFrameTwoShapeConfig* Method_1_D089533F2507FC5C(::System::String* a1)
	{
		return ((::MoleMole::Cameras::DefaultFrameTwoShapeConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_D089533F2507FC5C_OFFSET))(a1);
	}

	static ::MoleMole::Config::ConfigCameraShake* Method_1_5C460B446BE8E722(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigCameraShake*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_5C460B446BE8E722_OFFSET))(a1);
	}

	static ::MoleMole::Cameras::CameraOverrideTrackEntry* Method_1_45DA178CA5F6B5A3(::System::String* a1, ::System::String*& a2)
	{
		return ((::MoleMole::Cameras::CameraOverrideTrackEntry*(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_45DA178CA5F6B5A3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7413A83EDEE62A7C(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraCutsceneGroups*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraCutsceneGroups*>*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_7413A83EDEE62A7C_OFFSET))(a1);
	}

	static ::System::Void Method_1_2E04E911EC2F4E81_1(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_2E04E911EC2F4E81_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D7BA65B1BBDE51E0(::MoleMole::Config::ConfigCameraStoryDatas* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigCameraStoryDatas*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_D7BA65B1BBDE51E0_OFFSET))(a1);
	}

	static ::System::Void Method_1_371255EB21BDD1E6(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraStretchs*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraStretchs*>*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_371255EB21BDD1E6_OFFSET))(a1);
	}

	static ::System::Void Method_1_B508FD1F30805E9B_1(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_B508FD1F30805E9B_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DE1A3FCF34CD80AB(::MoleMole::Cameras::ConfigCameraOverrideTrack* a1)
	{
		return ((::System::Void(*)(::MoleMole::Cameras::ConfigCameraOverrideTrack*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_DE1A3FCF34CD80AB_OFFSET))(a1);
	}

	static ::System::Void Method_1_FF32C7746B81CE01(::MoleMole::Config::ConfigCameraPitchPolars* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigCameraPitchPolars*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_FF32C7746B81CE01_OFFSET))(a1);
	}

	static ::System::Void Method_1_8479F94F0BB0031B(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraLockTargetDatas*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraLockTargetDatas*>*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_8479F94F0BB0031B_OFFSET))(a1);
	}

	static ::System::Void Method_1_05564BAA98DE4F7D(::MoleMole::Cameras::ConfigCameraBangbooAdjustment* a1)
	{
		return ((::System::Void(*)(::MoleMole::Cameras::ConfigCameraBangbooAdjustment*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_05564BAA98DE4F7D_OFFSET))(a1);
	}

	static ::System::Void Method_1_2E04E911EC2F4E81_2(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_2E04E911EC2F4E81_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2E04E911EC2F4E81_3(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_2E04E911EC2F4E81_3_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigCameraStory* Method_1_7F03E08D216479FC(::System::String* a1, ::Nap::NapECS::EcsWorld* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::MoleMole::Config::ConfigCameraStory*(*)(::System::String*, ::Nap::NapECS::EcsWorld*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_7F03E08D216479FC_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::CameraShotData* Method_1_DCCA26CCDF96182C(::System::String* a1)
	{
		return ((::MoleMole::CameraShotData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_DCCA26CCDF96182C_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_A09A55886BD7EC21(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_A09A55886BD7EC21_OFFSET))(a1);
	}

	static ::System::Void Method_1_F01A4601A77AB111(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraCutscenes*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraCutscenes*>*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_F01A4601A77AB111_OFFSET))(a1);
	}

	static ::MoleMole::Cameras::FixedCameraConfig* Method_1_BFA3B46E9E2A71F0(::System::Int32 a1)
	{
		return ((::MoleMole::Cameras::FixedCameraConfig*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_BFA3B46E9E2A71F0_OFFSET))(a1);
	}

	static ::MoleMole::Config::ConfigCameraLockTargetBase* Method_1_8533906206528A21(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigCameraLockTargetBase*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_8533906206528A21_OFFSET))(a1);
	}

	static ::System::Void Method_1_2E04E911EC2F4E81_4(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_2E04E911EC2F4E81_4_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigCameraStretch* Method_1_AEE30FF405110201(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigCameraStretch*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_AEE30FF405110201_OFFSET))(a1);
	}

	static ::System::Void Method_1_2E04E911EC2F4E81_5(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_2E04E911EC2F4E81_5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4D11FA110316A313(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_4D11FA110316A313_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_8E2C129DE4FC3609_1(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_8E2C129DE4FC3609_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F96084E8117BDB3C(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraZooms*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraZooms*>*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_F96084E8117BDB3C_OFFSET))(a1);
	}

	static ::MoleMole::Config::ConfigCameraStory* Method_1_4434DBCBF65DA891(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigCameraStory*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_4434DBCBF65DA891_OFFSET))(a1);
	}

	static ::System::Void Method_1_2E04E911EC2F4E81_6(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_METHOD_1_2E04E911EC2F4E81_6_OFFSET))(a1, a2);
	}
};
