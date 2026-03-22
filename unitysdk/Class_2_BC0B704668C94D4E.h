#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_480FC3B3774489BF.h"
#include "unitysdk/Class_2_BC0B704668C94D4E_Enum_3_31CEC0C035193BA9.h"

namespace MoleMole { class GraphicSettingProfileBase; }
namespace System { class String; }

#define CLASS_2_BC0B704668C94D4E_METHOD_2_20A4F4259B985034_OFFSET UNITYSDK_OFFSET(0x7E86920)
#define CLASS_2_BC0B704668C94D4E_METHOD_2_6424DA16BE1ACD1D_OFFSET UNITYSDK_OFFSET(0x7E86990)
#define CLASS_2_BC0B704668C94D4E_METHOD_2_89C905EED1E7E1EC_OFFSET UNITYSDK_OFFSET(0x7E86A00)
#define CLASS_2_BC0B704668C94D4E_METHOD_2_C7E039FB0453A06F_OFFSET UNITYSDK_OFFSET(0x7E871A0)
#define CLASS_2_BC0B704668C94D4E_METHOD_2_CF27EDB12528CE39_OFFSET UNITYSDK_OFFSET(0x7E86110)
#define CLASS_2_BC0B704668C94D4E_METHOD_2_FD4C1388942F6085_OFFSET UNITYSDK_OFFSET(0x7E87040)
#define CLASS_2_BC0B704668C94D4E__CTOR_OFFSET UNITYSDK_OFFSET(0x7E86100)

inline static constexpr unsigned int Class_2_BC0B704668C94D4E_TypeDefinitionIndex = 69056;

class Class_2_BC0B704668C94D4E : public ::Class_1_480FC3B3774489BF
{
public:
	static ::Class_2_BC0B704668C94D4E_Enum_3_31CEC0C035193BA9* StaticGet_Field_2_0()
	{
		return (::Class_2_BC0B704668C94D4E_Enum_3_31CEC0C035193BA9*)Il2CppClass::FromTypeDefinitionIndex(Class_2_BC0B704668C94D4E_TypeDefinitionIndex)->GetStaticField(0xC810);
	}

	::System::Void _ctor(::MoleMole::GraphicSettingProfileBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GraphicSettingProfileBase*))((::PBYTE)hIl2Cpp + CLASS_2_BC0B704668C94D4E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CF27EDB12528CE39(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BC0B704668C94D4E_METHOD_2_CF27EDB12528CE39_OFFSET))(this, a1, a2);
	}

	static ::Class_2_BC0B704668C94D4E_Enum_3_31CEC0C035193BA9 Method_2_20A4F4259B985034()
	{
		return ((::Class_2_BC0B704668C94D4E_Enum_3_31CEC0C035193BA9(*)())((::PBYTE)hIl2Cpp + CLASS_2_BC0B704668C94D4E_METHOD_2_20A4F4259B985034_OFFSET))();
	}

	::System::Void Method_2_6424DA16BE1ACD1D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BC0B704668C94D4E_METHOD_2_6424DA16BE1ACD1D_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_89C905EED1E7E1EC(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BC0B704668C94D4E_METHOD_2_89C905EED1E7E1EC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_2_FD4C1388942F6085(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BC0B704668C94D4E_METHOD_2_FD4C1388942F6085_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_C7E039FB0453A06F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BC0B704668C94D4E_METHOD_2_C7E039FB0453A06F_OFFSET))(a1);
	}
};
