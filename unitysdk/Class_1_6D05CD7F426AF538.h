#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_16612A0474C29356;
namespace MoleMole { class MainCityPhotoPopContext; }
namespace MoleMole { class UIMainCityPhotoPopWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6D05CD7F426AF538_METHOD_1_E28D63C2FADE6FCB_OFFSET UNITYSDK_OFFSET(0x1662FE30)
#define CLASS_1_6D05CD7F426AF538__CTOR_OFFSET UNITYSDK_OFFSET(0x1662FE20)

inline static constexpr unsigned int Class_1_6D05CD7F426AF538_TypeDefinitionIndex = 56268;

class Class_1_6D05CD7F426AF538 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D05CD7F426AF538__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::Class_2_16612A0474C29356*>* Method_1_E28D63C2FADE6FCB(::MoleMole::UIMainCityPhotoPopWindowController* a1, ::MoleMole::MainCityPhotoPopContext* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_16612A0474C29356*>*(*)(::MoleMole::UIMainCityPhotoPopWindowController*, ::MoleMole::MainCityPhotoPopContext*))((::PBYTE)hIl2Cpp + CLASS_1_6D05CD7F426AF538_METHOD_1_E28D63C2FADE6FCB_OFFSET))(a1, a2);
	}
};
