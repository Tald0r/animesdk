#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
class Class_1_0D6706375CDAAE8C;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAB4BB00)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAB4BB40)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__REFRESHDATA_B__26_1_OFFSET UNITYSDK_OFFSET(0xAB4BB50)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__REFRESHREWARDVIEW_B__29_0_OFFSET UNITYSDK_OFFSET(0xAB4BB90)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__REFRESHVIEW_B__27_2_OFFSET UNITYSDK_OFFSET(0xAB4BB60)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__SUBMITLANDITEMS_B__31_1_OFFSET UNITYSDK_OFFSET(0xAB4BBA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityRevivalPageController___c_TypeDefinitionIndex = 53382;

	class UIMainCityRevivalPageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_0D6706375CDAAE8C*>** StaticGet___9__27_2()
		{
			return (::System::Comparison_1<::Class_1_0D6706375CDAAE8C*>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityRevivalPageController___c_TypeDefinitionIndex)->GetStaticField(0x3D8C0);
		}
		static ::MoleMole::UIMainCityRevivalPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIMainCityRevivalPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityRevivalPageController___c_TypeDefinitionIndex)->GetStaticField(0x3D8C8);
		}
		static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1** StaticGet___9__31_1()
		{
			return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityRevivalPageController___c_TypeDefinitionIndex)->GetStaticField(0x3D8D0);
		}
		static ::System::Comparison_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet___9__29_0()
		{
			return (::System::Comparison_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityRevivalPageController___c_TypeDefinitionIndex)->GetStaticField(0x3D8D8);
		}
		static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1** StaticGet___9__26_1()
		{
			return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityRevivalPageController___c_TypeDefinitionIndex)->GetStaticField(0x3D8E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshData_b__26_1(::Class_0_16E4307DCC419505_7* errorMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__REFRESHDATA_B__26_1_OFFSET))(this, errorMessage);
		}

		::System::Int32 _RefreshView_b__27_2(::Class_1_0D6706375CDAAE8C* a, ::Class_1_0D6706375CDAAE8C* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__REFRESHVIEW_B__27_2_OFFSET))(this, a, b);
		}

		::System::Int32 _RefreshRewardView_b__29_0(::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00 a, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00 b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__REFRESHREWARDVIEW_B__29_0_OFFSET))(this, a, b);
		}

		::System::Void _SubmitLandItems_b__31_1(::Class_0_16E4307DCC419505_7* errorMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__SUBMITLANDITEMS_B__31_1_OFFSET))(this, errorMessage);
		}
	};
}
