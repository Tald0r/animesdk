#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DitherConfig; }
namespace MoleMole { class DitherConfigSeparate; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_892C8E99BD4BE910_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x91DFE60)
#define CLASS_1_892C8E99BD4BE910_METHOD_1_323B9471437F5BD5_OFFSET UNITYSDK_OFFSET(0x91E00A0)
#define CLASS_1_892C8E99BD4BE910_METHOD_1_A0644DA3FCB812C3_OFFSET UNITYSDK_OFFSET(0x91E02F0)
#define CLASS_1_892C8E99BD4BE910_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x91E0380)

inline static constexpr unsigned int Class_1_892C8E99BD4BE910_TypeDefinitionIndex = 38292;

class Class_1_892C8E99BD4BE910 : public ::System::Object
{
public:
	static ::MoleMole::DitherConfigSeparate** StaticGet_Field_1_0()
	{
		return (::MoleMole::DitherConfigSeparate**)Il2CppClass::FromTypeDefinitionIndex(Class_1_892C8E99BD4BE910_TypeDefinitionIndex)->GetStaticField(0x2CE40);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_892C8E99BD4BE910_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::MoleMole::DitherConfig* Method_1_323B9471437F5BD5(::System::String* a1)
	{
		return ((::MoleMole::DitherConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_892C8E99BD4BE910_METHOD_1_323B9471437F5BD5_OFFSET))(a1);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_892C8E99BD4BE910_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::DitherConfigSeparate* Method_1_A0644DA3FCB812C3()
	{
		return ((::MoleMole::DitherConfigSeparate*(*)())((::PBYTE)hIl2Cpp + CLASS_1_892C8E99BD4BE910_METHOD_1_A0644DA3FCB812C3_OFFSET))();
	}
};
