#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_13E1F0BBFE52F5F0.h"
#include "unitysdk/Enum_3_41536F26CBEE8D4C.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Struct_2_1972A5FA12B7BFD3.h"
#include "unitysdk/Struct_2_61EDE525C60EB6BF.h"
#include "unitysdk/Struct_2_DAA84C1CDD754F37.h"

class Class_1_13B43DCF703FB24C;
class Class_1_15D62275ABED373C;
class Class_1_B2691B89FDE6F433;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_BFDC7DFB4F2A1B8E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8CD0260)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_02EC3AB3678E6FA9_OFFSET UNITYSDK_OFFSET(0x8CD0FF0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_05AF3E6C9FC16A49_OFFSET UNITYSDK_OFFSET(0x8CD41C0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_0DCB470D2651BEDB_OFFSET UNITYSDK_OFFSET(0x8CD1DB0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_102DEF90FFF11BCE_OFFSET UNITYSDK_OFFSET(0x8CD66C0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_12C9A3082ABA77E1_OFFSET UNITYSDK_OFFSET(0x8CD07B0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_1685BD3810865B7C_OFFSET UNITYSDK_OFFSET(0x8CD3190)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_16A6C398F9183AFF_OFFSET UNITYSDK_OFFSET(0x8CD6DC0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_172654BD094F27F9_OFFSET UNITYSDK_OFFSET(0x8CD74A0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_2034D36E9DCC1F26_OFFSET UNITYSDK_OFFSET(0x8CD0DB0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_213F26AAB5C88AF2_1_OFFSET UNITYSDK_OFFSET(0x8CD1C70)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_213F26AAB5C88AF2_2_OFFSET UNITYSDK_OFFSET(0x8CD56A0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_213F26AAB5C88AF2_3_OFFSET UNITYSDK_OFFSET(0x8CD7BD0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_213F26AAB5C88AF2_4_OFFSET UNITYSDK_OFFSET(0x8CD7FF0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_213F26AAB5C88AF2_OFFSET UNITYSDK_OFFSET(0x8CD08F0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x8CD7DA0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x8CD63C0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_25225CE3B182C1B3_OFFSET UNITYSDK_OFFSET(0x8CD3350)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_25E3D2E64FB63BEB_OFFSET UNITYSDK_OFFSET(0x8CD71E0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_2A73302F5D8B0BA6_OFFSET UNITYSDK_OFFSET(0x8CD0B70)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_3E7B7DB0EDF962BA_1_OFFSET UNITYSDK_OFFSET(0x8CD4C40)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_3E7B7DB0EDF962BA_2_OFFSET UNITYSDK_OFFSET(0x8CD57F0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_3E7B7DB0EDF962BA_OFFSET UNITYSDK_OFFSET(0x8CD3A60)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_4487776BEE04D471_1_OFFSET UNITYSDK_OFFSET(0x8CD38B0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_4487776BEE04D471_OFFSET UNITYSDK_OFFSET(0x8CD3530)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_44EDEAE08395A153_OFFSET UNITYSDK_OFFSET(0x8CD63A0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_47B7BC57A143C373_1_OFFSET UNITYSDK_OFFSET(0x8CD2A10)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_47B7BC57A143C373_OFFSET UNITYSDK_OFFSET(0x8CD3E10)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_48EECC15E10EEC11_OFFSET UNITYSDK_OFFSET(0x8CD2B90)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_580394B3F28DBF72_1_OFFSET UNITYSDK_OFFSET(0x8CD3C00)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_580394B3F28DBF72_2_OFFSET UNITYSDK_OFFSET(0x8CD6180)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_580394B3F28DBF72_OFFSET UNITYSDK_OFFSET(0x8CD2800)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_5A3F5C9120955FC0_OFFSET UNITYSDK_OFFSET(0x8CD8440)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_5CDF16CC200D8B52_OFFSET UNITYSDK_OFFSET(0x8CD7D10)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_5ECB1BEAB29483D2_1_OFFSET UNITYSDK_OFFSET(0x8CD5540)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_5ECB1BEAB29483D2_OFFSET UNITYSDK_OFFSET(0x8CD2E00)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_60451B2DE9D371C9_OFFSET UNITYSDK_OFFSET(0x8CD8130)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_6747250BC2D13457_OFFSET UNITYSDK_OFFSET(0x8CD6BB0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_695579C6786804DA_OFFSET UNITYSDK_OFFSET(0x8CD85B0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_70377E4403801957_OFFSET UNITYSDK_OFFSET(0x8CD0660)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_718B821A22E817E6_OFFSET UNITYSDK_OFFSET(0x8CD26C0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_7244790BA62376F4_1_OFFSET UNITYSDK_OFFSET(0x8CD11E0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_7244790BA62376F4_2_OFFSET UNITYSDK_OFFSET(0x8CD5E30)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_7244790BA62376F4_OFFSET UNITYSDK_OFFSET(0x8CD1780)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_774E05D782CFC509_OFFSET UNITYSDK_OFFSET(0x8CD7360)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_79419E7D890DB1EE_OFFSET UNITYSDK_OFFSET(0x8CD7DB0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_81F019B263A55D8A_OFFSET UNITYSDK_OFFSET(0x8CD36E0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_833F830E464BF470_OFFSET UNITYSDK_OFFSET(0x8CD53B0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_89A3DB19E7D72316_OFFSET UNITYSDK_OFFSET(0x8CD4890)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x8CD8290)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x8CD6FD0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_8F54650C0C7FD373_OFFSET UNITYSDK_OFFSET(0x8CD1AD0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_9DC8FC39D4B96824_OFFSET UNITYSDK_OFFSET(0x8CD4AB0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_A2C50CB4F15B4F5A_1_OFFSET UNITYSDK_OFFSET(0x8CD7A30)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_A2C50CB4F15B4F5A_OFFSET UNITYSDK_OFFSET(0x8CD1F50)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_A3BBABDE9313B31D_OFFSET UNITYSDK_OFFSET(0x8CD4DE0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_AB4E1E1E122D6A7B_OFFSET UNITYSDK_OFFSET(0x8CD5170)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x8CD03A0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_AD12372BE27436E0_OFFSET UNITYSDK_OFFSET(0x8CD24A0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_AF827A30708754FF_OFFSET UNITYSDK_OFFSET(0x8CD5990)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_AFCE123AA3A2A269_OFFSET UNITYSDK_OFFSET(0x8CD42B0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_B19802B263F14997_OFFSET UNITYSDK_OFFSET(0x8CD0A30)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_B330F7C2941699D0_OFFSET UNITYSDK_OFFSET(0x8CD8750)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_BA80D36BDA3B5115_1_OFFSET UNITYSDK_OFFSET(0x8CD16F0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_BA80D36BDA3B5115_2_OFFSET UNITYSDK_OFFSET(0x8CD5DA0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_BA80D36BDA3B5115_OFFSET UNITYSDK_OFFSET(0x8CD1150)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_BC5D900B4C8C5BA2_OFFSET UNITYSDK_OFFSET(0x8CD5C30)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x8CD5160)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x8CD5C20)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0x8CD63B0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C74E50CBD41F0264_4_OFFSET UNITYSDK_OFFSET(0x8CD6FB0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C74E50CBD41F0264_5_OFFSET UNITYSDK_OFFSET(0x8CD6FC0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x8CD3F90)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_CCB512EBF1EC8B01_OFFSET UNITYSDK_OFFSET(0x8CD46A0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_CE67C492DF7EC72A_OFFSET UNITYSDK_OFFSET(0x8CD82A0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_D199BA3CD9DE511C_OFFSET UNITYSDK_OFFSET(0x8CD63D0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_E253190D74DB6879_OFFSET UNITYSDK_OFFSET(0x8CD31A0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_EC952511C8B53446_1_OFFSET UNITYSDK_OFFSET(0x8CD4F20)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_EC952511C8B53446_OFFSET UNITYSDK_OFFSET(0x8CD2F50)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_EFEE544E44C651C2_1_OFFSET UNITYSDK_OFFSET(0x8CD7680)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_EFEE544E44C651C2_OFFSET UNITYSDK_OFFSET(0x8CD20F0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x8CD3180)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x8CD5690)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x8CD57E0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x8CD6390)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F0088C88851A7DFB_5_OFFSET UNITYSDK_OFFSET(0x8CD7D90)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x8CD1140)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F017FB51192D614D_OFFSET UNITYSDK_OFFSET(0x8CD6FE0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F8323F9C9DD7F303_OFFSET UNITYSDK_OFFSET(0x8CD3FA0)
#define CLASS_2_BFDC7DFB4F2A1B8E_ONCREATE_OFFSET UNITYSDK_OFFSET(0x8CD0330)
#define CLASS_2_BFDC7DFB4F2A1B8E__CTOR_OFFSET UNITYSDK_OFFSET(0x8CD05D0)

inline static constexpr unsigned int Class_2_BFDC7DFB4F2A1B8E_TypeDefinitionIndex = 76371;

class Class_2_BFDC7DFB4F2A1B8E : public ::Foundation::SingletonDisposable_1<::Class_2_BFDC7DFB4F2A1B8E*>
{
public:
	::Struct_2_1972A5FA12B7BFD3 Field_2_10; // 0x10
	::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_B2691B89FDE6F433*>* Field_2_8; // 0x40
	::Struct_2_1972A5FA12B7BFD3 Field_2_9; // 0x48
	::Class_1_15D62275ABED373C* Field_2_7; // 0x78
	::Class_1_15D62275ABED373C* Field_2_6; // 0x80
	::System::Boolean Field_2_2; // 0x88
	::System::Boolean Field_2_3; // 0x89
	::System::Boolean Field_2_1; // 0x8A
	::System::Boolean Field_2_0; // 0x8B
	::System::Boolean Field_2_4; // 0x8C
	::System::Boolean Field_2_5; // 0x8D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_ONCREATE_OFFSET))(this);
	}

	::System::Boolean Method_2_70377E4403801957(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_70377E4403801957_OFFSET))(this, a1);
	}

	::System::Void Method_2_213F26AAB5C88AF2(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_213F26AAB5C88AF2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2A73302F5D8B0BA6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_2A73302F5D8B0BA6_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_2034D36E9DCC1F26(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>* a2, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_2034D36E9DCC1F26_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Struct_2_61EDE525C60EB6BF Method_2_BA80D36BDA3B5115()
	{
		return ((::Struct_2_61EDE525C60EB6BF(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_BA80D36BDA3B5115_OFFSET))(this);
	}

	::Struct_2_61EDE525C60EB6BF Method_2_BA80D36BDA3B5115_1()
	{
		return ((::Struct_2_61EDE525C60EB6BF(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_BA80D36BDA3B5115_1_OFFSET))(this);
	}

	::System::Void Method_2_8F54650C0C7FD373(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_8F54650C0C7FD373_OFFSET))(this, a1);
	}

	::System::Void Method_2_213F26AAB5C88AF2_1(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_213F26AAB5C88AF2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A2C50CB4F15B4F5A(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_B2691B89FDE6F433*>* a1, ::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_B2691B89FDE6F433*>*, ::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_A2C50CB4F15B4F5A_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_EFEE544E44C651C2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_EFEE544E44C651C2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_AD12372BE27436E0(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_AD12372BE27436E0_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_580394B3F28DBF72(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_580394B3F28DBF72_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* Method_2_48EECC15E10EEC11()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_48EECC15E10EEC11_OFFSET))(this);
	}

	::System::Void Method_2_5ECB1BEAB29483D2(::Foundation::ResourceFileType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_5ECB1BEAB29483D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_EC952511C8B53446(::Foundation::ResourceFileType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_EC952511C8B53446_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_B2691B89FDE6F433*>* Method_2_1685BD3810865B7C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_B2691B89FDE6F433*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_1685BD3810865B7C_OFFSET))(this);
	}

	::System::Void Method_2_E253190D74DB6879(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_B2691B89FDE6F433*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_B2691B89FDE6F433*>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_E253190D74DB6879_OFFSET))(this, a1);
	}

	::System::Void Method_2_25225CE3B182C1B3(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_B2691B89FDE6F433*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_B2691B89FDE6F433*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_25225CE3B182C1B3_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4487776BEE04D471()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_4487776BEE04D471_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_81F019B263A55D8A()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_81F019B263A55D8A_OFFSET))(this);
	}

	::System::Boolean Method_2_4487776BEE04D471_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_4487776BEE04D471_1_OFFSET))(this);
	}

	::System::Void Method_2_3E7B7DB0EDF962BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_3E7B7DB0EDF962BA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_580394B3F28DBF72_1(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_580394B3F28DBF72_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_F8323F9C9DD7F303(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_B2691B89FDE6F433*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_B2691B89FDE6F433*>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F8323F9C9DD7F303_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::Struct_2_DAA84C1CDD754F37>* Method_2_05AF3E6C9FC16A49(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::HashSet_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_05AF3E6C9FC16A49_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_CCB512EBF1EC8B01(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_CCB512EBF1EC8B01_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_89A3DB19E7D72316(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_89A3DB19E7D72316_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3E7B7DB0EDF962BA_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_3E7B7DB0EDF962BA_1_OFFSET))(this);
	}

	::System::Void Method_2_A3BBABDE9313B31D(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_A3BBABDE9313B31D_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::HashSet_1<::Struct_2_DAA84C1CDD754F37>* Method_2_AFCE123AA3A2A269(::System::Collections::Generic::IEnumerable_1<::Class_1_B2691B89FDE6F433*>* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Collections::Generic::HashSet_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_B2691B89FDE6F433*>*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_AFCE123AA3A2A269_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_AB4E1E1E122D6A7B(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>* a2, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_AB4E1E1E122D6A7B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5ECB1BEAB29483D2_1(::Foundation::ResourceFileType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_5ECB1BEAB29483D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_0DCB470D2651BEDB(::Foundation::ResourceFileType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_0DCB470D2651BEDB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_2_213F26AAB5C88AF2_2(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_213F26AAB5C88AF2_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_2_3E7B7DB0EDF962BA_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_3E7B7DB0EDF962BA_2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_AF827A30708754FF(::Foundation::ResourceFileType a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_AF827A30708754FF_OFFSET))(this, a1);
	}

	::System::Void Method_2_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::Class_1_13B43DCF703FB24C* Method_2_BC5D900B4C8C5BA2(::Foundation::ResourceFileType a1)
	{
		return ((::Class_1_13B43DCF703FB24C*(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_BC5D900B4C8C5BA2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_47B7BC57A143C373(::Foundation::ResourceFileType a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_47B7BC57A143C373_OFFSET))(this, a1);
	}

	::Struct_2_61EDE525C60EB6BF Method_2_BA80D36BDA3B5115_2()
	{
		return ((::Struct_2_61EDE525C60EB6BF(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_BA80D36BDA3B5115_2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_580394B3F28DBF72_2(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_580394B3F28DBF72_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F0088C88851A7DFB_4_OFFSET))(this);
	}

	::System::Void Method_2_44EDEAE08395A153(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_B2691B89FDE6F433*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_B2691B89FDE6F433*>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_44EDEAE08395A153_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_12C9A3082ABA77E1(::Foundation::ResourceFileType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_12C9A3082ABA77E1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::Class_1_15D62275ABED373C* Method_2_24748FC20F375725()
	{
		return ((::Class_1_15D62275ABED373C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Boolean Method_2_D199BA3CD9DE511C(::Class_1_15D62275ABED373C* a1, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_B2691B89FDE6F433*>* a2, ::System::String*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_15D62275ABED373C*, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_B2691B89FDE6F433*>*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_D199BA3CD9DE511C_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_102DEF90FFF11BCE(::Class_1_15D62275ABED373C* a1, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_B2691B89FDE6F433*>* a2, ::System::String*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_15D62275ABED373C*, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_B2691B89FDE6F433*>*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_102DEF90FFF11BCE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6747250BC2D13457()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_6747250BC2D13457_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_16A6C398F9183AFF(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_16A6C398F9183AFF_OFFSET))(this, a1);
	}

	::System::Void Method_2_C74E50CBD41F0264_4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C74E50CBD41F0264_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_C74E50CBD41F0264_5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C74E50CBD41F0264_5_OFFSET))(this, a1);
	}

	::Struct_2_61EDE525C60EB6BF Method_2_7244790BA62376F4(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_B2691B89FDE6F433*>* a1)
	{
		return ((::Struct_2_61EDE525C60EB6BF(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_B2691B89FDE6F433*>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_7244790BA62376F4_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_15D62275ABED373C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_15D62275ABED373C*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_13B43DCF703FB24C*>* Method_2_F017FB51192D614D(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>* a2, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_13B43DCF703FB24C*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F017FB51192D614D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_774E05D782CFC509(::Foundation::ResourceFileType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_774E05D782CFC509_OFFSET))(this, a1);
	}

	::System::Void Method_2_EC952511C8B53446_1(::Foundation::ResourceFileType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_EC952511C8B53446_1_OFFSET))(this, a1, a2);
	}

	::Class_1_13B43DCF703FB24C* Method_2_25E3D2E64FB63BEB(::Foundation::ResourceFileType a1, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>* a2, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>* a3)
	{
		return ((::Class_1_13B43DCF703FB24C*(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_25E3D2E64FB63BEB_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Class_1_13B43DCF703FB24C*>* Method_2_172654BD094F27F9(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_13B43DCF703FB24C*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_172654BD094F27F9_OFFSET))(this, a1);
	}

	::System::Void Method_2_B19802B263F14997(::Foundation::ResourceFileType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_B19802B263F14997_OFFSET))(this, a1);
	}

	::System::String* Method_2_EFEE544E44C651C2_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_EFEE544E44C651C2_1_OFFSET))(this);
	}

	::System::Void Method_2_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::System::Void Method_2_A2C50CB4F15B4F5A_1(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_B2691B89FDE6F433*>* a1, ::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_B2691B89FDE6F433*>*, ::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_A2C50CB4F15B4F5A_1_OFFSET))(this, a1, a2);
	}

	::Struct_2_61EDE525C60EB6BF Method_2_7244790BA62376F4_1(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_B2691B89FDE6F433*>* a1)
	{
		return ((::Struct_2_61EDE525C60EB6BF(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_B2691B89FDE6F433*>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_7244790BA62376F4_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_02EC3AB3678E6FA9(::Foundation::ResourceFileType a1, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>* a2, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_02EC3AB3678E6FA9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_213F26AAB5C88AF2_3(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_213F26AAB5C88AF2_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_5CDF16CC200D8B52(::Class_1_15D62275ABED373C* a1, ::Class_1_15D62275ABED373C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_15D62275ABED373C*, ::Class_1_15D62275ABED373C*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_5CDF16CC200D8B52_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F0088C88851A7DFB_5_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_9DC8FC39D4B96824(::Foundation::ResourceFileType a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_9DC8FC39D4B96824_OFFSET))(this, a1, a2);
	}

	::Class_1_15D62275ABED373C* Method_2_24748FC20F375725_1()
	{
		return ((::Class_1_15D62275ABED373C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Boolean Method_2_79419E7D890DB1EE(::Struct_2_DAA84C1CDD754F37 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_DAA84C1CDD754F37))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_79419E7D890DB1EE_OFFSET))(this, a1);
	}

	::Struct_2_61EDE525C60EB6BF Method_2_7244790BA62376F4_2(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_B2691B89FDE6F433*>* a1)
	{
		return ((::Struct_2_61EDE525C60EB6BF(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_B2691B89FDE6F433*>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_7244790BA62376F4_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_213F26AAB5C88AF2_4(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_213F26AAB5C88AF2_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_60451B2DE9D371C9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_60451B2DE9D371C9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_833F830E464BF470(::Foundation::ResourceFileType a1, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>* a2, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_833F830E464BF470_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8C8625211DA811AE_1(::Class_1_15D62275ABED373C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_15D62275ABED373C*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CE67C492DF7EC72A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_CE67C492DF7EC72A_OFFSET))(this, a1);
	}

	::Class_1_13B43DCF703FB24C* Method_2_5A3F5C9120955FC0(::System::String* a1)
	{
		return ((::Class_1_13B43DCF703FB24C*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_5A3F5C9120955FC0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_47B7BC57A143C373_1(::Foundation::ResourceFileType a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_47B7BC57A143C373_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_695579C6786804DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_695579C6786804DA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_718B821A22E817E6(::Foundation::ResourceFileType a1, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_718B821A22E817E6_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_B330F7C2941699D0()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_B330F7C2941699D0_OFFSET))(this);
	}
};
