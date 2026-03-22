#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class TagLibraryConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_909C41311A9C5D42_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x703C950)
#define CLASS_1_909C41311A9C5D42_METHOD_1_3691C03E1A1C52DC_1_OFFSET UNITYSDK_OFFSET(0x703CFA0)
#define CLASS_1_909C41311A9C5D42_METHOD_1_3691C03E1A1C52DC_OFFSET UNITYSDK_OFFSET(0x703CD20)
#define CLASS_1_909C41311A9C5D42_METHOD_1_7E9D1461AADDD55E_OFFSET UNITYSDK_OFFSET(0x703CF20)
#define CLASS_1_909C41311A9C5D42_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x703D1A0)
#define CLASS_1_909C41311A9C5D42_METHOD_1_F1FECF14A351AEA8_OFFSET UNITYSDK_OFFSET(0x703CF60)

inline static constexpr unsigned int Class_1_909C41311A9C5D42_TypeDefinitionIndex = 54165;

class Class_1_909C41311A9C5D42 : public ::System::Object
{
public:
	static ::MoleMole::Config::TagLibraryConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::TagLibraryConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_909C41311A9C5D42_TypeDefinitionIndex)->GetStaticField(0x3E400);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_909C41311A9C5D42_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_3691C03E1A1C52DC(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_909C41311A9C5D42_METHOD_1_3691C03E1A1C52DC_OFFSET))(a1);
	}

	static ::MoleMole::Config::TagLibraryConfig* Method_1_7E9D1461AADDD55E()
	{
		return ((::MoleMole::Config::TagLibraryConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_909C41311A9C5D42_METHOD_1_7E9D1461AADDD55E_OFFSET))();
	}

	static ::System::Void Method_1_F1FECF14A351AEA8(::MoleMole::Config::TagLibraryConfig* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::TagLibraryConfig*))((::PBYTE)hIl2Cpp + CLASS_1_909C41311A9C5D42_METHOD_1_F1FECF14A351AEA8_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_3691C03E1A1C52DC_1(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_909C41311A9C5D42_METHOD_1_3691C03E1A1C52DC_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_909C41311A9C5D42_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}
};
