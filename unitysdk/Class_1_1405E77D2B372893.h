#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadCacheKey.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_2_A8F5ABF31E066ED4;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_1_1405E77D2B372893_METHOD_1_17FA0422991FF5E1_OFFSET UNITYSDK_OFFSET(0x95EE7B0)
#define CLASS_1_1405E77D2B372893_METHOD_1_19A243F71AC9569D_OFFSET UNITYSDK_OFFSET(0x95F1620)
#define CLASS_1_1405E77D2B372893_METHOD_1_23C898AAEB3A7308_OFFSET UNITYSDK_OFFSET(0x95F13D0)
#define CLASS_1_1405E77D2B372893_METHOD_1_289E069BEBB00D08_OFFSET UNITYSDK_OFFSET(0x95F2960)
#define CLASS_1_1405E77D2B372893_METHOD_1_2C38C45A06C4F43E_OFFSET UNITYSDK_OFFSET(0x95F3150)
#define CLASS_1_1405E77D2B372893_METHOD_1_2E806A43A7F1E286_OFFSET UNITYSDK_OFFSET(0x95F0780)
#define CLASS_1_1405E77D2B372893_METHOD_1_3368A955600D49B7_OFFSET UNITYSDK_OFFSET(0x95EED90)
#define CLASS_1_1405E77D2B372893_METHOD_1_49B12F8094E117D0_OFFSET UNITYSDK_OFFSET(0x95F1170)
#define CLASS_1_1405E77D2B372893_METHOD_1_4B76CED1EE263E14_OFFSET UNITYSDK_OFFSET(0x95F1490)
#define CLASS_1_1405E77D2B372893_METHOD_1_4C2A407444543FB7_OFFSET UNITYSDK_OFFSET(0x95EECD0)
#define CLASS_1_1405E77D2B372893_METHOD_1_4C9F348918F0BA3D_OFFSET UNITYSDK_OFFSET(0x95F2E70)
#define CLASS_1_1405E77D2B372893_METHOD_1_5109C3EB75C7AC4B_OFFSET UNITYSDK_OFFSET(0x95F1C60)
#define CLASS_1_1405E77D2B372893_METHOD_1_663635FC436CF63C_OFFSET UNITYSDK_OFFSET(0x95F1700)
#define CLASS_1_1405E77D2B372893_METHOD_1_6C4FCC17E4CD27D8_OFFSET UNITYSDK_OFFSET(0x95F3230)
#define CLASS_1_1405E77D2B372893_METHOD_1_7CF8E015B7C82EAA_OFFSET UNITYSDK_OFFSET(0x95F00B0)
#define CLASS_1_1405E77D2B372893_METHOD_1_871FC9C75EE72A2C_OFFSET UNITYSDK_OFFSET(0x95F2F70)
#define CLASS_1_1405E77D2B372893_METHOD_1_8F9A6909D322D906_OFFSET UNITYSDK_OFFSET(0x95EF1E0)
#define CLASS_1_1405E77D2B372893_METHOD_1_92EE7C62F1528449_OFFSET UNITYSDK_OFFSET(0x95F20F0)
#define CLASS_1_1405E77D2B372893_METHOD_1_970D9BBAEECEBF3E_OFFSET UNITYSDK_OFFSET(0x95F1570)
#define CLASS_1_1405E77D2B372893_METHOD_1_A4B43BB6DF03405F_OFFSET UNITYSDK_OFFSET(0x95EF7C0)
#define CLASS_1_1405E77D2B372893_METHOD_1_A933534E99843834_OFFSET UNITYSDK_OFFSET(0x95EFC20)
#define CLASS_1_1405E77D2B372893_METHOD_1_A9DAF3FE2888211B_OFFSET UNITYSDK_OFFSET(0x95EE500)
#define CLASS_1_1405E77D2B372893_METHOD_1_B32B39D60E141894_OFFSET UNITYSDK_OFFSET(0x95F05A0)
#define CLASS_1_1405E77D2B372893_METHOD_1_BD639774086BCC66_OFFSET UNITYSDK_OFFSET(0x95EE6D0)
#define CLASS_1_1405E77D2B372893_METHOD_1_C495FC84AA2302E0_OFFSET UNITYSDK_OFFSET(0x95F0D90)
#define CLASS_1_1405E77D2B372893_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x95F1250)
#define CLASS_1_1405E77D2B372893_METHOD_1_D39C74F1B804F2AC_OFFSET UNITYSDK_OFFSET(0x95F0C90)
#define CLASS_1_1405E77D2B372893_METHOD_1_D4B3608B292F0A4E_OFFSET UNITYSDK_OFFSET(0x95F0BD0)
#define CLASS_1_1405E77D2B372893_METHOD_1_E2B18B851C7D7E4F_OFFSET UNITYSDK_OFFSET(0x95EF360)
#define CLASS_1_1405E77D2B372893_METHOD_1_E3FAE0F50618D019_OFFSET UNITYSDK_OFFSET(0x95F1B80)
#define CLASS_1_1405E77D2B372893_METHOD_1_E6A96D38A28B6C65_OFFSET UNITYSDK_OFFSET(0x95F24C0)
#define CLASS_1_1405E77D2B372893_METHOD_1_E756FFE5B3ACE41A_OFFSET UNITYSDK_OFFSET(0x95F3070)
#define CLASS_1_1405E77D2B372893_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x95EE4E0)
#define CLASS_1_1405E77D2B372893_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x95F0D80)
#define CLASS_1_1405E77D2B372893_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x95EE4D0)
#define CLASS_1_1405E77D2B372893_METHOD_1_FFE69BE0854ABC72_OFFSET UNITYSDK_OFFSET(0x95F1260)
#define CLASS_1_1405E77D2B372893__CTOR_OFFSET UNITYSDK_OFFSET(0x95EE4F0)

inline static constexpr unsigned int Class_1_1405E77D2B372893_TypeDefinitionIndex = 52820;

class Class_1_1405E77D2B372893 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Foundation::AssetLoadCacheKey, ::Foundation::AssetRequestHandle>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::Foundation::AssetPath>* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::UnityEngine::Sprite* Method_1_BD639774086BCC66(::System::String* a1, ::Foundation::AssetRequestHandle& a2)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::String*, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_BD639774086BCC66_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Texture2D* Method_1_4C2A407444543FB7(::System::String* a1)
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_4C2A407444543FB7_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F9A6909D322D906(::Foundation::AssetLoadCacheKey a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadCacheKey))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_8F9A6909D322D906_OFFSET))(this, a1);
	}

	::Foundation::AssetRequestHandle Method_1_E2B18B851C7D7E4F(::Foundation::AssetPath a1, ::System::Action_1<::Foundation::AssetRequestHandle>* a2)
	{
		return ((::Foundation::AssetRequestHandle(*)(::PVOID, ::Foundation::AssetPath, ::System::Action_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_E2B18B851C7D7E4F_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Material* Method_1_A4B43BB6DF03405F(::Foundation::AssetPath a1)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_A4B43BB6DF03405F_OFFSET))(this, a1);
	}

	::System::Void Method_1_A933534E99843834(::Foundation::AssetPath a1, ::System::Action_1<::UnityEngine::Sprite*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Action_1<::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_A933534E99843834_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7CF8E015B7C82EAA(::UnityEngine::UI::Image* a1, ::Foundation::AssetPath a2, ::System::Action_1<::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::Foundation::AssetPath, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_7CF8E015B7C82EAA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B32B39D60E141894(::UnityEngine::Transform* a1, ::Foundation::AssetPath a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_B32B39D60E141894_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Sprite* Method_1_D4B3608B292F0A4E(::System::String* a1)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_D4B3608B292F0A4E_OFFSET))(this, a1);
	}

	::UnityEngine::Material* Method_1_D39C74F1B804F2AC(::System::String* a1)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_D39C74F1B804F2AC_OFFSET))(this, a1);
	}

	::UnityEngine::Sprite* Method_1_17FA0422991FF5E1(::Foundation::AssetPath a1, ::Foundation::AssetRequestHandle& a2)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::Foundation::AssetPath, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_17FA0422991FF5E1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C495FC84AA2302E0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_C495FC84AA2302E0_OFFSET))(this);
	}

	::System::Void Method_1_49B12F8094E117D0(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_49B12F8094E117D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A9DAF3FE2888211B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_A9DAF3FE2888211B_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_FFE69BE0854ABC72(::UnityEngine::UI::Image* a1, ::System::String* a2, ::Foundation::AssetRequestHandle& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_FFE69BE0854ABC72_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4B76CED1EE263E14(::UnityEngine::UI::Image* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_4B76CED1EE263E14_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Texture2D* Method_1_19A243F71AC9569D(::System::String* a1, ::Foundation::AssetRequestHandle& a2)
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID, ::System::String*, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_19A243F71AC9569D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E3FAE0F50618D019(::UnityEngine::UI::Image* a1, ::System::String* a2, ::System::Action_1<::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_E3FAE0F50618D019_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Texture2D* Method_1_3368A955600D49B7(::Foundation::AssetPath a1)
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_3368A955600D49B7_OFFSET))(this, a1);
	}

	::UnityEngine::Sprite* Method_1_5109C3EB75C7AC4B(::UnityEngine::UI::Image* a1, ::Foundation::AssetPath a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::UnityEngine::UI::Image*, ::Foundation::AssetPath, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_5109C3EB75C7AC4B_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Material* Method_1_92EE7C62F1528449(::Foundation::AssetPath a1, ::UnityEngine::Material* a2)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_92EE7C62F1528449_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Texture2D* Method_1_663635FC436CF63C(::Foundation::AssetPath a1, ::Foundation::AssetRequestHandle& a2)
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID, ::Foundation::AssetPath, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_663635FC436CF63C_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Sprite* Method_1_2E806A43A7F1E286(::Foundation::AssetPath a1)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_2E806A43A7F1E286_OFFSET))(this, a1);
	}

	::System::Void Method_1_E6A96D38A28B6C65(::Foundation::AssetRequestHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_E6A96D38A28B6C65_OFFSET))(this, a1);
	}

	::System::Void Method_1_289E069BEBB00D08(::UnityEngine::UI::Image* a1, ::Foundation::AssetPath a2, ::System::Action_1<::Foundation::AssetRequestHandle>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::Foundation::AssetPath, ::System::Action_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_289E069BEBB00D08_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Sprite* Method_1_4C9F348918F0BA3D(::UnityEngine::UI::Image* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_4C9F348918F0BA3D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_23C898AAEB3A7308(::UnityEngine::UI::Image* a1, ::Foundation::AssetPath a2, ::Foundation::AssetRequestHandle& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::Foundation::AssetPath, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_23C898AAEB3A7308_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_970D9BBAEECEBF3E(::UnityEngine::UI::Image* a1, ::Foundation::AssetPath a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_970D9BBAEECEBF3E_OFFSET))(this, a1, a2);
	}

	::Foundation::AssetRequestHandle Method_1_871FC9C75EE72A2C(::System::String* a1, ::System::Action_1<::Foundation::AssetRequestHandle>* a2)
	{
		return ((::Foundation::AssetRequestHandle(*)(::PVOID, ::System::String*, ::System::Action_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_871FC9C75EE72A2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E756FFE5B3ACE41A(::System::String* a1, ::System::Action_1<::UnityEngine::Sprite*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_E756FFE5B3ACE41A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2C38C45A06C4F43E(::UnityEngine::UI::Image* a1, ::System::String* a2, ::System::Action_1<::Foundation::AssetRequestHandle>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*, ::System::Action_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_2C38C45A06C4F43E_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Sprite* Method_1_6C4FCC17E4CD27D8(::Class_2_A8F5ABF31E066ED4* a1, ::Foundation::AssetPath a2, ::System::Boolean a3, ::System::Boolean a4, ::Foundation::AssetRequestHandle& a5)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::Class_2_A8F5ABF31E066ED4*, ::Foundation::AssetPath, ::System::Boolean, ::System::Boolean, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_METHOD_1_6C4FCC17E4CD27D8_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
