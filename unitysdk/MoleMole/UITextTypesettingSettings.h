#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_46FE3E575CBDB25A.h"
#include "unitysdk/Enum_3_CBD75F282C7514DC.h"
#include "unitysdk/MoleMole/TextTypesetMidChar.h"
#include "unitysdk/Struct_2_2465FE796254C062.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__MIDLETTERTEXTDISPLAY_OFFSET UNITYSDK_OFFSET(0xAAFDAD0)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__NOTINENDDISPLAY_OFFSET UNITYSDK_OFFSET(0xAAFD8E0)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__NOTINHEADDISPLAY_OFFSET UNITYSDK_OFFSET(0xAAFDAA0)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__NOTINHEADIFAFTERTEXTDISPLAY_OFFSET UNITYSDK_OFFSET(0xAAFDAB0)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__SPECIALWORDDISPLAY_OFFSET UNITYSDK_OFFSET(0xAAFDAC0)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_METHOD_1_01BE963E6AF97FBD_OFFSET UNITYSDK_OFFSET(0xAAFDC40)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_METHOD_1_1B62F9E2C78C53AA_OFFSET UNITYSDK_OFFSET(0xAAFDAF0)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_METHOD_1_1CE8D7BF33884F48_OFFSET UNITYSDK_OFFSET(0xAAFE1E0)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_METHOD_1_CCDD78442FA217D1_OFFSET UNITYSDK_OFFSET(0xAAFDE20)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_METHOD_1_E3E5928886A5C3E1_OFFSET UNITYSDK_OFFSET(0xAAFD8F0)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0xAAFDAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UITextTypesettingSettings_TypeDefinitionIndex = 43144;

	class UITextTypesettingSettings : public ::System::Object
	{
	public:
		::System::String* Ellipsis; // 0x10
		::Il2CppArray<::System::String*>* NotInEnd; // 0x18
		::Il2CppArray<::System::String*>* NotInHead; // 0x20
		::Il2CppArray<::System::String*>* NotInHeadIfAfterText; // 0x28
		::Il2CppArray<::System::String*>* SpecialWord; // 0x30
		::Il2CppArray<::System::String*>* MidLetter; // 0x38
		::Il2CppArray<::MoleMole::TextTypesetMidChar>* MidChars; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS__CTOR_OFFSET))(this);
		}

		::System::String* get__NotInEndDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__NOTINENDDISPLAY_OFFSET))(this);
		}

		::System::String* get__NotInHeadDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__NOTINHEADDISPLAY_OFFSET))(this);
		}

		::System::String* get__NotInHeadIfAfterTextDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__NOTINHEADIFAFTERTEXTDISPLAY_OFFSET))(this);
		}

		::System::String* get__SpecialWordDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__SPECIALWORDDISPLAY_OFFSET))(this);
		}

		::System::String* get__MidLetterTextDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__MIDLETTERTEXTDISPLAY_OFFSET))(this);
		}

		static ::System::String* Method_1_E3E5928886A5C3E1(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_METHOD_1_E3E5928886A5C3E1_OFFSET))(a1);
		}

		static ::System::Void Method_1_01BE963E6AF97FBD(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::Enum_3_CBD75F282C7514DC, ::Struct_2_2465FE796254C062>>* a1, ::System::String* a2, ::Enum_3_CBD75F282C7514DC a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::Enum_3_CBD75F282C7514DC, ::Struct_2_2465FE796254C062>>*, ::System::String*, ::Enum_3_CBD75F282C7514DC))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_METHOD_1_01BE963E6AF97FBD_OFFSET))(a1, a2, a3);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::Enum_3_CBD75F282C7514DC, ::Struct_2_2465FE796254C062>>* Method_1_CCDD78442FA217D1()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::Enum_3_CBD75F282C7514DC, ::Struct_2_2465FE796254C062>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_METHOD_1_CCDD78442FA217D1_OFFSET))(this);
		}

		static ::System::Void Method_1_1CE8D7BF33884F48(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::Enum_3_CBD75F282C7514DC, ::Struct_2_2465FE796254C062>>* a1, ::System::String* a2, ::Enum_3_46FE3E575CBDB25A a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::Enum_3_CBD75F282C7514DC, ::Struct_2_2465FE796254C062>>*, ::System::String*, ::Enum_3_46FE3E575CBDB25A))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_METHOD_1_1CE8D7BF33884F48_OFFSET))(a1, a2, a3);
		}

		static ::System::String* Method_1_1B62F9E2C78C53AA(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_METHOD_1_1B62F9E2C78C53AA_OFFSET))(a1);
		}
	};
}
