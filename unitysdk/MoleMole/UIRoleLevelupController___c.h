#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_240;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIROLELEVELUPCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A09770)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER___C__CLEARMATERIAL_B__42_0_OFFSET UNITYSDK_OFFSET(0x9A098E0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9A097B0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER___C__SETCONSUME_B__41_0_OFFSET UNITYSDK_OFFSET(0x9A09890)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER___C__SHOWBACKITEMLISTDIALOG_B__26_0_OFFSET UNITYSDK_OFFSET(0x9A097C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleLevelupController___c_TypeDefinitionIndex = 73893;

	class UIRoleLevelupController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIRoleLevelupController___c** StaticGet___9()
		{
			return (::MoleMole::UIRoleLevelupController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRoleLevelupController___c_TypeDefinitionIndex)->GetStaticField(0x3AB90);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_240*>** StaticGet___9__42_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_240*>**)Il2CppClass::FromTypeDefinitionIndex(UIRoleLevelupController___c_TypeDefinitionIndex)->GetStaticField(0x3AB98);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_240*>** StaticGet___9__41_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_240*>**)Il2CppClass::FromTypeDefinitionIndex(UIRoleLevelupController___c_TypeDefinitionIndex)->GetStaticField(0x3ABA0);
		}
		static ::System::Action** StaticGet___9__26_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleLevelupController___c_TypeDefinitionIndex)->GetStaticField(0x3ABA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowBackItemListDialog_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER___C__SHOWBACKITEMLISTDIALOG_B__26_0_OFFSET))(this);
		}

		::System::Int32 _SetConsume_b__41_0(::Class_2_208CC9941471731A_240* ext, ::Class_2_208CC9941471731A_240* templateExt)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_240*, ::Class_2_208CC9941471731A_240*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER___C__SETCONSUME_B__41_0_OFFSET))(this, ext, templateExt);
		}

		::System::Int32 _ClearMaterial_b__42_0(::Class_2_208CC9941471731A_240* ext, ::Class_2_208CC9941471731A_240* templateExt)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_240*, ::Class_2_208CC9941471731A_240*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER___C__CLEARMATERIAL_B__42_0_OFFSET))(this, ext, templateExt);
		}
	};
}
