#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICloudController; }
namespace MoleMole { class UICloudController_UIRTCItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BB23A191D295AA7A_METHOD_1_1E2CD75DC8B80C0C_OFFSET UNITYSDK_OFFSET(0x84DE850)
#define CLASS_1_BB23A191D295AA7A_METHOD_1_59F39D92868E7D23_1_OFFSET UNITYSDK_OFFSET(0x84DEDB0)
#define CLASS_1_BB23A191D295AA7A_METHOD_1_59F39D92868E7D23_OFFSET UNITYSDK_OFFSET(0x84DEAA0)
#define CLASS_1_BB23A191D295AA7A_METHOD_1_E09076A4D4E448D7_OFFSET UNITYSDK_OFFSET(0x84DF0C0)
#define CLASS_1_BB23A191D295AA7A__CCTOR_OFFSET UNITYSDK_OFFSET(0x84DE7C0)

inline static constexpr unsigned int Class_1_BB23A191D295AA7A_TypeDefinitionIndex = 68656;

class Class_1_BB23A191D295AA7A : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::MoleMole::UICloudController*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::UICloudController*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB23A191D295AA7A_TypeDefinitionIndex)->GetStaticField(0x37360);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB23A191D295AA7A__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::MoleMole::UICloudController_UIRTCItem*>* Method_1_1E2CD75DC8B80C0C()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UICloudController_UIRTCItem*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB23A191D295AA7A_METHOD_1_1E2CD75DC8B80C0C_OFFSET))();
	}

	static ::System::Void Method_1_59F39D92868E7D23(::MoleMole::UICloudController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UICloudController*))((::PBYTE)hIl2Cpp + CLASS_1_BB23A191D295AA7A_METHOD_1_59F39D92868E7D23_OFFSET))(a1);
	}

	static ::System::Void Method_1_59F39D92868E7D23_1(::MoleMole::UICloudController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UICloudController*))((::PBYTE)hIl2Cpp + CLASS_1_BB23A191D295AA7A_METHOD_1_59F39D92868E7D23_1_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::UICloudController*>* Method_1_E09076A4D4E448D7()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UICloudController*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB23A191D295AA7A_METHOD_1_E09076A4D4E448D7_OFFSET))();
	}
};
