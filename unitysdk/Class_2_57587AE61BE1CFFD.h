#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/Struct_2_2CEE35A1FF4AE199.h"
#include "unitysdk/Struct_2_5119F8C34F295015.h"
#include "unitysdk/Struct_2_733B8EC4B9916061.h"
#include "unitysdk/Struct_2_9F85650CFFBE9F44.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_207206F45DEB584F;
class Class_1_3A46F934F31B990A;
class Class_1_73F7DED90F9FA901;
class Class_1_BC9D27E6028F322B;
class Class_1_CEBEFC8BE3C58B6D;
namespace MoleMole { class UIMainCityChatPlayWidgetController; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class DefaultFrameTwoShapeConfig; }
namespace MoleMole::Cameras { class VariableCameraConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_2_57587AE61BE1CFFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x661F020)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_05679872695EE5DE_OFFSET UNITYSDK_OFFSET(0x66252A0)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_0DF03C6BD9A0D2E2_OFFSET UNITYSDK_OFFSET(0x6625120)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_1194AF14CFC26C72_OFFSET UNITYSDK_OFFSET(0x6623C10)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_13523FD4EA5101C4_OFFSET UNITYSDK_OFFSET(0x6625F00)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_1392CBDB51FA788E_OFFSET UNITYSDK_OFFSET(0x661F370)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_1A0314C707B31534_OFFSET UNITYSDK_OFFSET(0x661FA40)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x661F500)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x6625AA0)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_25B6EFC63CE6F337_OFFSET UNITYSDK_OFFSET(0x6624B60)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_283C25FC229B03DF_OFFSET UNITYSDK_OFFSET(0x66216A0)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0x661F170)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_34B229565DFE6F97_OFFSET UNITYSDK_OFFSET(0x6624F80)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_354231F5E00AF9B6_OFFSET UNITYSDK_OFFSET(0x6620D40)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_3A0CD6F3468A02E3_OFFSET UNITYSDK_OFFSET(0x6622FC0)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_3AA20A0DA6990FBE_OFFSET UNITYSDK_OFFSET(0x6623420)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_416DF51B59CCB5FB_OFFSET UNITYSDK_OFFSET(0x6623970)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x6624CF0)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_46C8A5CC76F825B5_OFFSET UNITYSDK_OFFSET(0x6624540)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_544C8251E16F2754_OFFSET UNITYSDK_OFFSET(0x6621500)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x6620600)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_5DFE3579DF424BD9_OFFSET UNITYSDK_OFFSET(0x66232A0)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_5F40A650E3C29243_OFFSET UNITYSDK_OFFSET(0x6620670)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_62211A015A37AB88_OFFSET UNITYSDK_OFFSET(0x66249B0)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_6338CB48D171EC2D_OFFSET UNITYSDK_OFFSET(0x6623890)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_64C034C6442E8F81_OFFSET UNITYSDK_OFFSET(0x6620F80)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0x6625880)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_6CD0070896D25F1D_OFFSET UNITYSDK_OFFSET(0x6620E80)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_77ADDD74D0B4B1EB_OFFSET UNITYSDK_OFFSET(0x661F2F0)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_7E9AC3FFDA4606D5_OFFSET UNITYSDK_OFFSET(0x6622F10)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_81F8AD83D0EF7197_OFFSET UNITYSDK_OFFSET(0x6622B70)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_87DED0DC07A5E40B_OFFSET UNITYSDK_OFFSET(0x661F580)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x6624EC0)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x6621830)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_90B44BD0ECA17820_OFFSET UNITYSDK_OFFSET(0x6620E90)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x6620E10)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_9E9988CBA7F7999C_OFFSET UNITYSDK_OFFSET(0x66208A0)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_A00EAD174EF85E42_OFFSET UNITYSDK_OFFSET(0x6625210)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_A16E7856498E5381_OFFSET UNITYSDK_OFFSET(0x6622E70)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_BD4A9C99D7EDC06B_OFFSET UNITYSDK_OFFSET(0x6621C00)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_BFC5623CCD8DAEAB_OFFSET UNITYSDK_OFFSET(0x6625330)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_C128768A91FA5888_OFFSET UNITYSDK_OFFSET(0x6622DB0)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x6625110)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x6625A90)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_C7FBDF23D94CBF9A_OFFSET UNITYSDK_OFFSET(0x6625EF0)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x6624C00)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x6624C80)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6623820)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_CBCB1EF15E904B7F_1_OFFSET UNITYSDK_OFFSET(0x66259D0)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_CBCB1EF15E904B7F_OFFSET UNITYSDK_OFFSET(0x66257D0)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_CD0F559E399AB5D2_OFFSET UNITYSDK_OFFSET(0x6620AF0)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_CEEA8717F1571454_OFFSET UNITYSDK_OFFSET(0x6625730)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_D26781BB4DC04F18_OFFSET UNITYSDK_OFFSET(0x6621B50)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_E23A4DD35F635FCD_OFFSET UNITYSDK_OFFSET(0x6624860)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_EBDEB81FA3C1F4D1_OFFSET UNITYSDK_OFFSET(0x6624640)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_EF6E535007F18893_OFFSET UNITYSDK_OFFSET(0x6625B20)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x6623410)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_F09E2FC85882F429_OFFSET UNITYSDK_OFFSET(0x661F7E0)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_F20FA1DA4846651D_OFFSET UNITYSDK_OFFSET(0x6625430)
#define CLASS_2_57587AE61BE1CFFD_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x6621AE0)
#define CLASS_2_57587AE61BE1CFFD_ONCREATE_OFFSET UNITYSDK_OFFSET(0x661F090)
#define CLASS_2_57587AE61BE1CFFD__CTOR_OFFSET UNITYSDK_OFFSET(0x661F200)

inline static constexpr unsigned int Class_2_57587AE61BE1CFFD_TypeDefinitionIndex = 53499;

class Class_2_57587AE61BE1CFFD : public ::Foundation::SingletonDisposable_1<::Class_2_57587AE61BE1CFFD*>
{
public:
	// static const ::System::Single Field_2_1; // 0x0
	::System::Action* Field_2_12; // 0x10
	::Struct_2_5119F8C34F295015 Field_2_7; // 0x18
	::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>* Field_2_8; // 0x68
	::System::Action_1<::System::Boolean>* Field_2_13; // 0x70
	::MoleMole::UIMainCityChatPlayWidgetController* Field_2_10; // 0x78
	::System::Action_1<::System::Boolean>* Field_2_14; // 0x80
	::System::Action* Field_2_3; // 0x88
	::Class_1_CEBEFC8BE3C58B6D* Field_2_11; // 0x90
	::Class_1_207206F45DEB584F* Field_2_18; // 0x98
	::System::String* Field_2_9; // 0xA0
	::System::Collections::Generic::Queue_1<::System::Func_1<::System::Boolean>*>* Field_2_19; // 0xA8
	::System::UInt32 Field_2_20; // 0xB0
	::System::Boolean Field_2_16; // 0xB4
	::System::Boolean Field_2_17; // 0xB5
	::System::Int32 Field_2_15; // 0xB8
	::System::Int32 Field_2_6; // 0xBC
	::System::Int32 Field_2_2; // 0xC0
	::System::Boolean Field_2_0; // 0xC4
	::System::Boolean Field_2_5; // 0xC5
	::System::Boolean Field_2_4; // 0xC6

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_77ADDD74D0B4B1EB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_77ADDD74D0B4B1EB_OFFSET))(this, a1);
	}

	::System::Void Method_2_1392CBDB51FA788E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_1392CBDB51FA788E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_87DED0DC07A5E40B(::System::Int32 a1, ::System::String* a2, ::System::Action_1<::Class_1_BC9D27E6028F322B*>* a3, ::MoleMole::Battle::Entity* a4, ::System::String* a5, ::System::Int32 a6, ::Enum_3_F00DC819D834EFD2 a7, ::System::Action_1<::Class_1_BC9D27E6028F322B*>* a8)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Action_1<::Class_1_BC9D27E6028F322B*>*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32, ::Enum_3_F00DC819D834EFD2, ::System::Action_1<::Class_1_BC9D27E6028F322B*>*))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_87DED0DC07A5E40B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Void Method_2_5F40A650E3C29243(::System::Int32 a1, ::System::String* a2, ::MoleMole::Battle::Entity* a3, ::System::String* a4, ::System::Action_1<::Class_1_BC9D27E6028F322B*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Action_1<::Class_1_BC9D27E6028F322B*>*))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_5F40A650E3C29243_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_9E9988CBA7F7999C(::Enum_3_F00DC819D834EFD2 a1, ::System::UInt32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F00DC819D834EFD2, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_9E9988CBA7F7999C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CD0F559E399AB5D2(::System::Int32 a1, ::System::Action_1<::Class_1_BC9D27E6028F322B*>* a2, ::MoleMole::Battle::Entity* a3, ::System::String* a4, ::System::Int32 a5, ::Enum_3_F00DC819D834EFD2 a6, ::System::Action_1<::Class_1_BC9D27E6028F322B*>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_1_BC9D27E6028F322B*>*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32, ::Enum_3_F00DC819D834EFD2, ::System::Action_1<::Class_1_BC9D27E6028F322B*>*))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_CD0F559E399AB5D2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::Struct_2_733B8EC4B9916061 Method_2_354231F5E00AF9B6(::System::String* a1, ::System::Nullable_1<::Struct_2_733B8EC4B9916061> a2)
	{
		return ((::Struct_2_733B8EC4B9916061(*)(::PVOID, ::System::String*, ::System::Nullable_1<::Struct_2_733B8EC4B9916061>))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_354231F5E00AF9B6_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_2_6CD0070896D25F1D(::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_6CD0070896D25F1D_OFFSET))(this, a1);
	}

	::System::Void Method_2_90B44BD0ECA17820(::Class_1_3A46F934F31B990A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A46F934F31B990A*))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_90B44BD0ECA17820_OFFSET))(this, a1);
	}

	::System::Void Method_2_64C034C6442E8F81(::Enum_3_F00DC819D834EFD2 a1, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a2, ::System::String* a3, ::System::Nullable_1<::Struct_2_733B8EC4B9916061> a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F00DC819D834EFD2, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::String*, ::System::Nullable_1<::Struct_2_733B8EC4B9916061>))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_64C034C6442E8F81_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_544C8251E16F2754(::System::Int32 a1, ::System::Action_1<::Class_1_BC9D27E6028F322B*>* a2, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a3, ::System::String* a4, ::Enum_3_F00DC819D834EFD2 a5, ::System::Nullable_1<::Struct_2_733B8EC4B9916061> a6, ::System::Action_1<::Class_1_BC9D27E6028F322B*>* a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_1_BC9D27E6028F322B*>*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::String*, ::Enum_3_F00DC819D834EFD2, ::System::Nullable_1<::Struct_2_733B8EC4B9916061>, ::System::Action_1<::Class_1_BC9D27E6028F322B*>*))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_544C8251E16F2754_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::Class_1_207206F45DEB584F* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_207206F45DEB584F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Boolean Method_2_F09E2FC85882F429(::System::Int32 a1, ::System::String* a2, ::System::Action_1<::Class_1_BC9D27E6028F322B*>* a3, ::MoleMole::Battle::Entity* a4, ::System::String* a5, ::System::Int32 a6, ::Enum_3_F00DC819D834EFD2 a7, ::System::Action_1<::Class_1_BC9D27E6028F322B*>* a8)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Action_1<::Class_1_BC9D27E6028F322B*>*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32, ::Enum_3_F00DC819D834EFD2, ::System::Action_1<::Class_1_BC9D27E6028F322B*>*))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_F09E2FC85882F429_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_D26781BB4DC04F18(::Enum_3_F00DC819D834EFD2 a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F00DC819D834EFD2, ::System::UInt32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_D26781BB4DC04F18_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_81F8AD83D0EF7197(::Enum_3_F00DC819D834EFD2 a1, ::PipelineCamera::FinalCameraData a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F00DC819D834EFD2, ::PipelineCamera::FinalCameraData))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_81F8AD83D0EF7197_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_2_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_2FA8AE0519AC7829_OFFSET))(this);
	}

	::System::Void Method_2_BD4A9C99D7EDC06B(::Enum_3_F00DC819D834EFD2 a1, ::System::UInt32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F00DC819D834EFD2, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_BD4A9C99D7EDC06B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3A0CD6F3468A02E3(::Class_1_3A46F934F31B990A* a1, ::System::Action_1<::Class_1_BC9D27E6028F322B*>* a2, ::PipelineCamera::FinalCameraData a3, ::Enum_3_F00DC819D834EFD2 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A46F934F31B990A*, ::System::Action_1<::Class_1_BC9D27E6028F322B*>*, ::PipelineCamera::FinalCameraData, ::Enum_3_F00DC819D834EFD2))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_3A0CD6F3468A02E3_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::MoleMole::Cameras::DefaultFrameTwoShapeConfig* Method_2_A16E7856498E5381(::System::String* a1)
	{
		return ((::MoleMole::Cameras::DefaultFrameTwoShapeConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_A16E7856498E5381_OFFSET))(a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_3AA20A0DA6990FBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_3AA20A0DA6990FBE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_1_CEBEFC8BE3C58B6D* Method_2_7E9AC3FFDA4606D5()
	{
		return ((::Class_1_CEBEFC8BE3C58B6D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_7E9AC3FFDA4606D5_OFFSET))(this);
	}

	::System::Void Method_2_6338CB48D171EC2D(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_6338CB48D171EC2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_416DF51B59CCB5FB(::Class_1_73F7DED90F9FA901* a1, ::System::Action_1<::Class_1_BC9D27E6028F322B*>* a2, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a3, ::System::String* a4, ::Enum_3_F00DC819D834EFD2 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_73F7DED90F9FA901*, ::System::Action_1<::Class_1_BC9D27E6028F322B*>*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::String*, ::Enum_3_F00DC819D834EFD2))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_416DF51B59CCB5FB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_1194AF14CFC26C72(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_1194AF14CFC26C72_OFFSET))(this, a1);
	}

	::System::Void Method_2_E23A4DD35F635FCD(::Class_1_3A46F934F31B990A* a1, ::System::Action_1<::Class_1_BC9D27E6028F322B*>* a2, ::MoleMole::Battle::Entity* a3, ::System::String* a4, ::System::Int32 a5, ::Enum_3_F00DC819D834EFD2 a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A46F934F31B990A*, ::System::Action_1<::Class_1_BC9D27E6028F322B*>*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32, ::Enum_3_F00DC819D834EFD2))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_E23A4DD35F635FCD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::MoleMole::Cameras::VariableCameraConfig* Method_2_62211A015A37AB88()
	{
		return ((::MoleMole::Cameras::VariableCameraConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_62211A015A37AB88_OFFSET))();
	}

	::System::Void Method_2_25B6EFC63CE6F337(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_25B6EFC63CE6F337_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	static ::System::Void Method_2_458DAEAB6170C584()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_458DAEAB6170C584_OFFSET))();
	}

	::System::Boolean Method_2_283C25FC229B03DF(::System::Int32 a1, ::System::String* a2, ::System::Action_1<::Class_1_BC9D27E6028F322B*>* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Action_1<::Class_1_BC9D27E6028F322B*>*))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_283C25FC229B03DF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_5119F8C34F295015 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_5119F8C34F295015))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_34B229565DFE6F97(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3, ::Struct_2_2CEE35A1FF4AE199& a4)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::Struct_2_2CEE35A1FF4AE199&))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_34B229565DFE6F97_OFFSET))(a1, a2, a3, a4);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_2_5DFE3579DF424BD9(::System::Int32 a1, ::System::Action_1<::Class_1_BC9D27E6028F322B*>* a2, ::PipelineCamera::FinalCameraData a3, ::Enum_3_F00DC819D834EFD2 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_1_BC9D27E6028F322B*>*, ::PipelineCamera::FinalCameraData, ::Enum_3_F00DC819D834EFD2))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_5DFE3579DF424BD9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_EBDEB81FA3C1F4D1(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_EBDEB81FA3C1F4D1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0DF03C6BD9A0D2E2(::Class_1_CEBEFC8BE3C58B6D* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CEBEFC8BE3C58B6D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_0DF03C6BD9A0D2E2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A00EAD174EF85E42(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_A00EAD174EF85E42_OFFSET))(this, a1);
	}

	::System::Void Method_2_05679872695EE5DE(::Class_1_207206F45DEB584F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_207206F45DEB584F*))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_05679872695EE5DE_OFFSET))(this, a1);
	}

	::System::Void Method_2_46C8A5CC76F825B5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_46C8A5CC76F825B5_OFFSET))(this, a1);
	}

	::Struct_2_733B8EC4B9916061 Method_2_BFC5623CCD8DAEAB(::Class_1_3A46F934F31B990A* a1)
	{
		return ((::Struct_2_733B8EC4B9916061(*)(::PVOID, ::Class_1_3A46F934F31B990A*))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_BFC5623CCD8DAEAB_OFFSET))(this, a1);
	}

	::System::Void Method_2_F20FA1DA4846651D(::Class_1_73F7DED90F9FA901* a1, ::System::Action_1<::Class_1_BC9D27E6028F322B*>* a2, ::MoleMole::Battle::Entity* a3, ::System::String* a4, ::System::Int32 a5, ::Enum_3_F00DC819D834EFD2 a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_73F7DED90F9FA901*, ::System::Action_1<::Class_1_BC9D27E6028F322B*>*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32, ::Enum_3_F00DC819D834EFD2))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_F20FA1DA4846651D_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_CBCB1EF15E904B7F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_CBCB1EF15E904B7F_OFFSET))(this, a1);
	}

	::System::Void Method_2_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_664C062015F0C2D3_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEEA8717F1571454(::Class_1_73F7DED90F9FA901* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_73F7DED90F9FA901*))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_CEEA8717F1571454_OFFSET))(this, a1);
	}

	::System::Void Method_2_CBCB1EF15E904B7F_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_CBCB1EF15E904B7F_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_2_1A0314C707B31534(::System::Int32 a1, ::System::String* a2, ::System::Action_1<::Class_1_BC9D27E6028F322B*>* a3, ::Enum_3_F00DC819D834EFD2 a4, ::System::Action_1<::Class_1_BC9D27E6028F322B*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Action_1<::Class_1_BC9D27E6028F322B*>*, ::Enum_3_F00DC819D834EFD2, ::System::Action_1<::Class_1_BC9D27E6028F322B*>*))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_1A0314C707B31534_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_EF6E535007F18893(::Class_1_3A46F934F31B990A* a1, ::System::Action_1<::Class_1_BC9D27E6028F322B*>* a2, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a3, ::System::String* a4, ::Enum_3_F00DC819D834EFD2 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A46F934F31B990A*, ::System::Action_1<::Class_1_BC9D27E6028F322B*>*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::String*, ::Enum_3_F00DC819D834EFD2))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_EF6E535007F18893_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>* Method_2_C7FBDF23D94CBF9A()
	{
		return ((::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_C7FBDF23D94CBF9A_OFFSET))(this);
	}

	::System::Void Method_2_13523FD4EA5101C4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_13523FD4EA5101C4_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_C128768A91FA5888(::Struct_2_9F85650CFFBE9F44 a1, ::Struct_2_9F85650CFFBE9F44 a2, ::System::String* a3)
	{
		return ((::System::String*(*)(::Struct_2_9F85650CFFBE9F44, ::Struct_2_9F85650CFFBE9F44, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_METHOD_2_C128768A91FA5888_OFFSET))(a1, a2, a3);
	}
};
