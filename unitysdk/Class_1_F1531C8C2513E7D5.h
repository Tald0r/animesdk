#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_70D79F3E41B659AE.h"
#include "unitysdk/System/Object.h"

class Class_1_016CB5CE722D8D8A;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F1531C8C2513E7D5_METHOD_1_256BD923B4899F2A_OFFSET UNITYSDK_OFFSET(0x700E580)
#define CLASS_1_F1531C8C2513E7D5_METHOD_1_264105AD04A3525E_OFFSET UNITYSDK_OFFSET(0x700E210)
#define CLASS_1_F1531C8C2513E7D5_METHOD_1_439E4B3FB362993E_OFFSET UNITYSDK_OFFSET(0x700E410)
#define CLASS_1_F1531C8C2513E7D5_METHOD_1_67C10584F4320583_OFFSET UNITYSDK_OFFSET(0x700E090)
#define CLASS_1_F1531C8C2513E7D5__CTOR_OFFSET UNITYSDK_OFFSET(0x700E060)

inline static constexpr unsigned int Class_1_F1531C8C2513E7D5_TypeDefinitionIndex = 70105;

class Class_1_F1531C8C2513E7D5 : public ::System::Object
{
public:
	// static const ::System::Char Field_1_0; // 0x0
	// static const ::System::Char Field_1_1; // 0x0
	// static const ::System::Char Field_1_2; // 0x0
	// static const ::System::Char Field_1_3; // 0x0
	// static const ::System::Char Field_1_4; // 0x0
	// static const ::System::Char Field_1_5; // 0x0
	// static const ::System::Char Field_1_6; // 0x0
	// static const ::System::Char Field_1_7; // 0x0
	// static const ::System::Char Field_1_8; // 0x0
	// static const ::System::Char Field_1_9; // 0x0
	::System::String* Field_1_10; // 0x10
	::System::Int32 Field_1_11; // 0x18

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F1531C8C2513E7D5__CTOR_OFFSET))(this, a1);
	}

	::Class_1_016CB5CE722D8D8A* Method_1_67C10584F4320583()
	{
		return ((::Class_1_016CB5CE722D8D8A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1531C8C2513E7D5_METHOD_1_67C10584F4320583_OFFSET))(this);
	}

	::System::Boolean Method_1_264105AD04A3525E(::System::Char a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + CLASS_1_F1531C8C2513E7D5_METHOD_1_264105AD04A3525E_OFFSET))(this, a1);
	}

	::Enum_3_70D79F3E41B659AE Method_1_439E4B3FB362993E(::System::Char a1)
	{
		return ((::Enum_3_70D79F3E41B659AE(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + CLASS_1_F1531C8C2513E7D5_METHOD_1_439E4B3FB362993E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_016CB5CE722D8D8A*>* Method_1_256BD923B4899F2A()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_016CB5CE722D8D8A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1531C8C2513E7D5_METHOD_1_256BD923B4899F2A_OFFSET))(this);
	}
};
