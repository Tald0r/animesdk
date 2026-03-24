#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8AEAC96C9E81D972_Struct_2_18E794CDBE104DC1_3.h"
#include "unitysdk/Foundation/ObjectHandle.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/Variable_2.h"
#include "unitysdk/MoleMole/InLevelMultiChatConfig.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceContext.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_57C422EDEAAA7766.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_19D881135705D575;
class Class_1_8DC4A6B2DA67EF18;
class Class_1_BC9D27E6028F322B;
namespace Foundation { template <typename T> class ObjectProxy_1; }
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { template <typename T> class ICameraSequenceCollection_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_8AEAC96C9E81D972_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x676BC80)
#define CLASS_2_8AEAC96C9E81D972_METHOD_2_014D8AE702435ACA_OFFSET UNITYSDK_OFFSET(0x6769780)
#define CLASS_2_8AEAC96C9E81D972_METHOD_2_10478E252B9E1B91_OFFSET UNITYSDK_OFFSET(0x676C060)
#define CLASS_2_8AEAC96C9E81D972_METHOD_2_1CFA9C02CDDB465F_OFFSET UNITYSDK_OFFSET(0x676BD50)
#define CLASS_2_8AEAC96C9E81D972_METHOD_2_1D2E0D34E5B80FE9_OFFSET UNITYSDK_OFFSET(0x676BDF0)
#define CLASS_2_8AEAC96C9E81D972_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x676BF10)
#define CLASS_2_8AEAC96C9E81D972_METHOD_2_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0x676C930)
#define CLASS_2_8AEAC96C9E81D972_METHOD_2_1D4018D4200358D0_3_OFFSET UNITYSDK_OFFSET(0x676CB60)
#define CLASS_2_8AEAC96C9E81D972_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x676BE90)
#define CLASS_2_8AEAC96C9E81D972_METHOD_2_20CB55310DA00017_OFFSET UNITYSDK_OFFSET(0x676D020)
#define CLASS_2_8AEAC96C9E81D972_METHOD_2_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x676D000)
#define CLASS_2_8AEAC96C9E81D972_METHOD_2_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x676D010)
#define CLASS_2_8AEAC96C9E81D972_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x676C9B0)
#define CLASS_2_8AEAC96C9E81D972_METHOD_2_54D9F076DD3781B1_OFFSET UNITYSDK_OFFSET(0x676B500)
#define CLASS_2_8AEAC96C9E81D972_METHOD_2_70662636528151D7_OFFSET UNITYSDK_OFFSET(0x676C080)
#define CLASS_2_8AEAC96C9E81D972_METHOD_2_7C2013E05F36FDC3_OFFSET UNITYSDK_OFFSET(0x676C200)
#define CLASS_2_8AEAC96C9E81D972_METHOD_2_A41A4126E09888A8_OFFSET UNITYSDK_OFFSET(0x676CAA0)
#define CLASS_2_8AEAC96C9E81D972_METHOD_2_C12DBE468567E77A_OFFSET UNITYSDK_OFFSET(0x676BCF0)
#define CLASS_2_8AEAC96C9E81D972_METHOD_2_C4B97B51666ED6D0_OFFSET UNITYSDK_OFFSET(0x676BDA0)
#define CLASS_2_8AEAC96C9E81D972_METHOD_2_CFAC03C3080DD000_1_OFFSET UNITYSDK_OFFSET(0x676C9C0)
#define CLASS_2_8AEAC96C9E81D972_METHOD_2_CFAC03C3080DD000_OFFSET UNITYSDK_OFFSET(0x676BF80)
#define CLASS_2_8AEAC96C9E81D972_METHOD_2_DD1EE3A48E307831_OFFSET UNITYSDK_OFFSET(0x6769590)
#define CLASS_2_8AEAC96C9E81D972_METHOD_2_E399EAE92DB03529_OFFSET UNITYSDK_OFFSET(0x676D0B0)
#define CLASS_2_8AEAC96C9E81D972_METHOD_2_EFD899C616187CA8_OFFSET UNITYSDK_OFFSET(0x676D090)
#define CLASS_2_8AEAC96C9E81D972_METHOD_2_F3AA553D0BC36777_OFFSET UNITYSDK_OFFSET(0x676CBE0)
#define CLASS_2_8AEAC96C9E81D972_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x6769570)
#define CLASS_2_8AEAC96C9E81D972_METHOD_2_FBBEFE5B8076D83E_OFFSET UNITYSDK_OFFSET(0x676C430)
#define CLASS_2_8AEAC96C9E81D972_RELEASE_OFFSET UNITYSDK_OFFSET(0x676BBD0)
#define CLASS_2_8AEAC96C9E81D972__CCTOR_OFFSET UNITYSDK_OFFSET(0x676BE30)
#define CLASS_2_8AEAC96C9E81D972__CTOR_OFFSET UNITYSDK_OFFSET(0x6768EF0)

inline static constexpr unsigned int Class_2_8AEAC96C9E81D972_TypeDefinitionIndex = 48637;

class Class_2_8AEAC96C9E81D972 : public ::PipelineCamera::CameraSequence::CameraSequenceContext
{
public:
	static ::Foundation::Unreal::FName* StaticGet_Field_2_6()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_2_8AEAC96C9E81D972_TypeDefinitionIndex)->GetStaticField(0xA390);
	}
	// static const ::System::Single Field_2_7; // 0x0
	::System::Action_1<::Class_2_8AEAC96C9E81D972_Struct_2_18E794CDBE104DC1_3>* Field_2_2; // 0x60
	::Class_1_19D881135705D575* Field_2_0; // 0x68
	::Foundation::Variable_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>> Field_2_8; // 0x70
	::Il2CppArray<::System::UInt32>* Field_2_10; // 0xB0
	::Foundation::ObjectProxy_1<::Class_2_8AEAC96C9E81D972*>* Field_2_4; // 0xB8
	::Class_1_8DC4A6B2DA67EF18* Field_2_5; // 0xC0
	::Nap::NapECS::EcsWorld* Field_2_11; // 0xC8
	::PipelineCamera::WorldBasicCameraData Field_2_12; // 0xD0
	::MoleMole::InLevelMultiChatConfig Field_2_1; // 0xFC
	::Class_2_8AEAC96C9E81D972_Struct_2_18E794CDBE104DC1_3 Field_2_3; // 0x108
	::System::UInt32 Field_2_9; // 0x10C

	::System::Void _ctor(::Class_1_19D881135705D575* a1, ::MoleMole::InLevelMultiChatConfig a2, ::System::UInt32 a3, ::Nap::NapECS::EcsWorld* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_19D881135705D575*, ::MoleMole::InLevelMultiChatConfig, ::System::UInt32, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972__CCTOR_OFFSET))();
	}

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Boolean Method_2_DD1EE3A48E307831()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_METHOD_2_DD1EE3A48E307831_OFFSET))(this);
	}

	::System::Void Method_2_014D8AE702435ACA(::System::Nullable_1<::System::Boolean> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_METHOD_2_014D8AE702435ACA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_54D9F076DD3781B1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_METHOD_2_54D9F076DD3781B1_OFFSET))(this);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_RELEASE_OFFSET))(this);
	}

	::Foundation::ObjectHandle get_Handle()
	{
		return ((::Foundation::ObjectHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_GET_HANDLE_OFFSET))(this);
	}

	::System::Void Method_2_C12DBE468567E77A(::PipelineCamera::WorldBasicCameraData& a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_METHOD_2_C12DBE468567E77A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1CFA9C02CDDB465F(::System::Func_1<::PipelineCamera::WorldBasicCameraData>* a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_METHOD_2_1CFA9C02CDDB465F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C4B97B51666ED6D0(::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>* a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_METHOD_2_C4B97B51666ED6D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1D2E0D34E5B80FE9(::MoleMole::Cameras::CameraTrackBlending* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_METHOD_2_1D2E0D34E5B80FE9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Action* Method_2_CFAC03C3080DD000()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_METHOD_2_CFAC03C3080DD000_OFFSET))(this);
	}

	::Il2CppArray<::Struct_2_57C422EDEAAA7766>* Method_2_10478E252B9E1B91()
	{
		return ((::Il2CppArray<::Struct_2_57C422EDEAAA7766>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_METHOD_2_10478E252B9E1B91_OFFSET))(this);
	}

	::System::Void Method_2_70662636528151D7(::Class_1_BC9D27E6028F322B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BC9D27E6028F322B*))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_METHOD_2_70662636528151D7_OFFSET))(this, a1);
	}

	static ::Class_2_8AEAC96C9E81D972* Method_2_7C2013E05F36FDC3(::Class_1_19D881135705D575* a1)
	{
		return ((::Class_2_8AEAC96C9E81D972*(*)(::Class_1_19D881135705D575*))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_METHOD_2_7C2013E05F36FDC3_OFFSET))(a1);
	}

	static ::MoleMole::InLevelMultiChatConfig Method_2_FBBEFE5B8076D83E(::System::String* a1, ::MoleMole::InLevelMultiChatConfig a2)
	{
		return ((::MoleMole::InLevelMultiChatConfig(*)(::System::String*, ::MoleMole::InLevelMultiChatConfig))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_METHOD_2_FBBEFE5B8076D83E_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_1D4018D4200358D0_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_METHOD_2_1D4018D4200358D0_2_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Action* Method_2_CFAC03C3080DD000_1()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_METHOD_2_CFAC03C3080DD000_1_OFFSET))(this);
	}

	::System::Void Method_2_A41A4126E09888A8(::PipelineCamera::WorldBasicCameraData& a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_METHOD_2_A41A4126E09888A8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1D4018D4200358D0_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_METHOD_2_1D4018D4200358D0_3_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_2_F3AA553D0BC36777()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_METHOD_2_F3AA553D0BC36777_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_METHOD_2_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_METHOD_2_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_2_20CB55310DA00017(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_METHOD_2_20CB55310DA00017_OFFSET))(this, a1);
	}

	::System::Action* Method_2_EFD899C616187CA8()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_METHOD_2_EFD899C616187CA8_OFFSET))(this);
	}

	::PipelineCamera::CameraSequence::ICameraSequenceCollection_1<::PipelineCamera::WorldBasicCameraData>* Method_2_E399EAE92DB03529()
	{
		return ((::PipelineCamera::CameraSequence::ICameraSequenceCollection_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AEAC96C9E81D972_METHOD_2_E399EAE92DB03529_OFFSET))(this);
	}
};
