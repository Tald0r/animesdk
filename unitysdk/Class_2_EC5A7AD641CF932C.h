#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A3658A741325FC2.h"
#include "unitysdk/Class_2_EC5A7AD641CF932C_Struct_2_532EB3129DF46CFB.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_207206F45DEB584F;
class Class_1_43BD383C98B4C0C5_83;
class Class_2_5F64140FAB2210F3;
class Class_2_EA61C125529DDEBD;
class Class_2_EC5A7AD641CF932C_Class_1_BCC994F93231B781;
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Config { class ConfigCameraNoise; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Transform; }

#define CLASS_2_EC5A7AD641CF932C_METHOD_2_0219D86E940B651E_OFFSET UNITYSDK_OFFSET(0x13C90D10)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_027CC47100EB17D3_OFFSET UNITYSDK_OFFSET(0x13C919A0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x13C91C50)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_1E2CA392E30740A5_OFFSET UNITYSDK_OFFSET(0x13C92270)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_205FC28689D0755B_OFFSET UNITYSDK_OFFSET(0x13C913E0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_2807D405A057B061_OFFSET UNITYSDK_OFFSET(0x13C93AB0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_373955BEE837D5FD_OFFSET UNITYSDK_OFFSET(0x13C91CD0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_40EBA7013E4CCDDF_OFFSET UNITYSDK_OFFSET(0x13C925A0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_4F8C7517280BA3C0_OFFSET UNITYSDK_OFFSET(0x13C92D10)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_5F2A1E2A2AF0EF2D_OFFSET UNITYSDK_OFFSET(0x13C90E10)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_6F40BE5E7E5918E8_OFFSET UNITYSDK_OFFSET(0x13C91EF0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_788B5024D990B633_OFFSET UNITYSDK_OFFSET(0x13C910F0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0x13C921D0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_8972CA953214CCAC_OFFSET UNITYSDK_OFFSET(0x13C93920)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_8B5ABF32D3B1B37E_OFFSET UNITYSDK_OFFSET(0x13C91AE0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x13C93B60)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_A86A455D6AB5B836_OFFSET UNITYSDK_OFFSET(0x13C93BF0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_AF36EBA0C8D1FBA2_OFFSET UNITYSDK_OFFSET(0x13C91560)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_B14855E77E9E443C_OFFSET UNITYSDK_OFFSET(0x13C92100)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_BC84E726D1664BB2_OFFSET UNITYSDK_OFFSET(0x13C939E0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x13C93230)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x13C93220)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_DAD00FCEA47D5936_OFFSET UNITYSDK_OFFSET(0x13C91350)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x13C92760)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x13C92500)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_FE4FFF99CBDC5C59_1_OFFSET UNITYSDK_OFFSET(0x13C93870)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_FE4FFF99CBDC5C59_OFFSET UNITYSDK_OFFSET(0x13C91E30)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_FEF8181177ACD990_OFFSET UNITYSDK_OFFSET(0x13C92A60)
#define CLASS_2_EC5A7AD641CF932C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C90D00)
#define CLASS_2_EC5A7AD641CF932C__CTOR_OFFSET UNITYSDK_OFFSET(0x13C90AE0)

inline static constexpr unsigned int Class_2_EC5A7AD641CF932C_TypeDefinitionIndex = 66561;

class Class_2_EC5A7AD641CF932C : public ::Class_1_8A3658A741325FC2
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_EC5A7AD641CF932C_TypeDefinitionIndex)->GetStaticField(0xB690);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_EC5A7AD641CF932C_Class_1_BCC994F93231B781*>* Field_2_22; // 0x18
	::System::Collections::Generic::List_1<::Class_2_EC5A7AD641CF932C_Struct_2_532EB3129DF46CFB>* Field_2_1; // 0x20
	::MoleMole::Cameras::CameraTrackBlending* Field_2_14; // 0x28
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_2_25; // 0x30
	::Class_1_207206F45DEB584F* Field_2_13; // 0x38
	::Class_2_5F64140FAB2210F3* Field_2_29; // 0x40
	::System::Threading::CancellationTokenSource* Field_2_21; // 0x48
	::Class_2_EA61C125529DDEBD* Field_2_28; // 0x50
	::MoleMole::Config::ConfigCameraNoise* Field_2_26; // 0x58
	::Class_2_EC5A7AD641CF932C_Class_1_BCC994F93231B781* Field_2_6; // 0x60
	::System::Collections::Generic::List_1<::Class_2_EC5A7AD641CF932C_Struct_2_532EB3129DF46CFB>* Field_2_2; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_EC5A7AD641CF932C_Class_1_BCC994F93231B781*>* Field_2_23; // 0x70
	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>* Field_2_24; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_2_16; // 0x80
	::System::Int32 Field_2_20; // 0x88
	::UnityEngine::Quaternion Field_2_18; // 0x8C
	::System::Single Field_2_10; // 0x9C
	::UnityEngine::Quaternion Field_2_35; // 0xA0
	::UnityEngine::Quaternion Field_2_32; // 0xB0
	::System::Boolean Field_2_19; // 0xC0
	::System::Single Field_2_33; // 0xC4
	::System::Int32 Field_2_3; // 0xC8
	::UnityEngine::Quaternion Field_2_9; // 0xCC
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_5; // 0xDC
	::UnityEngine::Vector3 Field_2_34; // 0xEC
	::System::Single Field_2_27; // 0xF8
	::System::Single Field_2_30; // 0xFC
	::UnityEngine::Vector3 Field_2_4; // 0x100
	::System::Single Field_2_7; // 0x10C
	::System::Single Field_2_15; // 0x110
	::System::Int32 Field_2_12; // 0x114
	::System::Int32 Field_2_8; // 0x118
	::UnityEngine::Vector3 Field_2_17; // 0x11C
	::UnityEngine::Vector3 Field_2_31; // 0x128
	::System::Int32 Field_2_11; // 0x134

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C__CCTOR_OFFSET))();
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_0219D86E940B651E(::Class_2_EC5A7AD641CF932C_Struct_2_532EB3129DF46CFB a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_2_EC5A7AD641CF932C_Struct_2_532EB3129DF46CFB))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_0219D86E940B651E_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_2_5F2A1E2A2AF0EF2D(::System::Int32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_5F2A1E2A2AF0EF2D_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_788B5024D990B633(::Class_2_EC5A7AD641CF932C_Class_1_BCC994F93231B781* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_EC5A7AD641CF932C_Class_1_BCC994F93231B781*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_788B5024D990B633_OFFSET))(this, a1);
	}

	::System::Void Method_2_DAD00FCEA47D5936(::System::Single a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_DAD00FCEA47D5936_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::Class_2_EC5A7AD641CF932C_Class_1_BCC994F93231B781*> Method_2_205FC28689D0755B(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::Class_2_EC5A7AD641CF932C_Class_1_BCC994F93231B781*>(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_205FC28689D0755B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_AF36EBA0C8D1FBA2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_AF36EBA0C8D1FBA2_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_2_027CC47100EB17D3()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_027CC47100EB17D3_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::Class_2_EC5A7AD641CF932C_Class_1_BCC994F93231B781*> Method_2_373955BEE837D5FD(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::Class_2_EC5A7AD641CF932C_Class_1_BCC994F93231B781*>(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_373955BEE837D5FD_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_FE4FFF99CBDC5C59_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_6F40BE5E7E5918E8(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::System::String* a7, ::System::Collections::Generic::IList_1<::System::String*>* a8)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::String*, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_6F40BE5E7E5918E8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_B14855E77E9E443C(::Class_1_43BD383C98B4C0C5_83* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_83*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_B14855E77E9E443C_OFFSET))(this, a1);
	}

	::System::Void Method_2_870AF3CD1D0A67B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_870AF3CD1D0A67B1_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_2_1E2CA392E30740A5()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_1E2CA392E30740A5_OFFSET))(this);
	}

	::System::Void Method_2_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Void Method_2_40EBA7013E4CCDDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_40EBA7013E4CCDDF_OFFSET))(this);
	}

	::System::Void Method_2_FEF8181177ACD990(::System::String* a1, ::System::Collections::Generic::IList_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_FEF8181177ACD990_OFFSET))(this, a1, a2);
	}

	::Class_2_EC5A7AD641CF932C_Class_1_BCC994F93231B781* Method_2_8B5ABF32D3B1B37E(::System::Int32 a1)
	{
		return ((::Class_2_EC5A7AD641CF932C_Class_1_BCC994F93231B781*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_8B5ABF32D3B1B37E_OFFSET))(this, a1);
	}

	::PipelineCamera::WorldBasicCameraData Method_2_4F8C7517280BA3C0()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_4F8C7517280BA3C0_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59_1()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_FE4FFF99CBDC5C59_1_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_8972CA953214CCAC(::System::Boolean a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_8972CA953214CCAC_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_BC84E726D1664BB2(::System::Func_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Func_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_BC84E726D1664BB2_OFFSET))(this, a1);
	}

	::System::Void Method_2_2807D405A057B061(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_2807D405A057B061_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_2_A86A455D6AB5B836(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_A86A455D6AB5B836_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_EBEE0D0A222A8264_OFFSET))(this);
	}
};
