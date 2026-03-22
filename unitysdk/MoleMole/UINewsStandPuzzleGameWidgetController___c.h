#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_609;
namespace MoleMole { class UINewsStandPuzzlePieceWidgetController; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBE721C0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBE72200)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___C__GET_ISCURCHAPTERCOMPLETE_B__41_0_OFFSET UNITYSDK_OFFSET(0xBE72210)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___C__INITDATA_B__42_0_OFFSET UNITYSDK_OFFSET(0xBE72230)

namespace MoleMole
{
	inline static constexpr unsigned int UINewsStandPuzzleGameWidgetController___c_TypeDefinitionIndex = 70483;

	class UINewsStandPuzzleGameWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MoleMole::UINewsStandPuzzlePieceWidgetController*, ::System::Boolean>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::MoleMole::UINewsStandPuzzlePieceWidgetController*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UINewsStandPuzzleGameWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x427C0);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_609*, ::System::Int32>** StaticGet___9__42_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_609*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UINewsStandPuzzleGameWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x427C8);
		}
		static ::MoleMole::UINewsStandPuzzleGameWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UINewsStandPuzzleGameWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UINewsStandPuzzleGameWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x427D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsCurChapterComplete_b__41_0(::MoleMole::UINewsStandPuzzlePieceWidgetController* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UINewsStandPuzzlePieceWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___C__GET_ISCURCHAPTERCOMPLETE_B__41_0_OFFSET))(this, p);
		}

		::System::Int32 _InitData_b__42_0(::Class_2_208CC9941471731A_609* c)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_609*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___C__INITDATA_B__42_0_OFFSET))(this, c);
		}
	};
}
