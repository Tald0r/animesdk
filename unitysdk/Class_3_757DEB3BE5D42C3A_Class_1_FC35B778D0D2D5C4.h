#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_3_757DEB3BE5D42C3A_CLASS_1_FC35B778D0D2D5C4_METHOD_1_0DB6264D24221B24_OFFSET UNITYSDK_OFFSET(0x997A390)
#define CLASS_3_757DEB3BE5D42C3A_CLASS_1_FC35B778D0D2D5C4_METHOD_1_172DCB7BC2CF8EB4_OFFSET UNITYSDK_OFFSET(0x997A1C0)
#define CLASS_3_757DEB3BE5D42C3A_CLASS_1_FC35B778D0D2D5C4_METHOD_1_311C27EC07E88B49_OFFSET UNITYSDK_OFFSET(0x997A4F0)
#define CLASS_3_757DEB3BE5D42C3A_CLASS_1_FC35B778D0D2D5C4_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x997A570)
#define CLASS_3_757DEB3BE5D42C3A_CLASS_1_FC35B778D0D2D5C4_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x997A4E0)
#define CLASS_3_757DEB3BE5D42C3A_CLASS_1_FC35B778D0D2D5C4_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x997A780)
#define CLASS_3_757DEB3BE5D42C3A_CLASS_1_FC35B778D0D2D5C4__CTOR_OFFSET UNITYSDK_OFFSET(0x997A1B0)

inline static constexpr unsigned int Class_3_757DEB3BE5D42C3A_Class_1_FC35B778D0D2D5C4_TypeDefinitionIndex = 78415;

class Class_3_757DEB3BE5D42C3A_Class_1_FC35B778D0D2D5C4 : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_3; // 0x10
	::System::String* Field_1_0; // 0x20
	::System::Boolean Field_1_4; // 0x28
	::System::Boolean Field_1_5; // 0x29
	::System::Single Field_1_2; // 0x2C
	::System::Single Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757DEB3BE5D42C3A_CLASS_1_FC35B778D0D2D5C4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_172DCB7BC2CF8EB4(::System::Int32 a1, ::System::String* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_757DEB3BE5D42C3A_CLASS_1_FC35B778D0D2D5C4_METHOD_1_172DCB7BC2CF8EB4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_757DEB3BE5D42C3A_CLASS_1_FC35B778D0D2D5C4_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_1_311C27EC07E88B49()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757DEB3BE5D42C3A_CLASS_1_FC35B778D0D2D5C4_METHOD_1_311C27EC07E88B49_OFFSET))(this);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757DEB3BE5D42C3A_CLASS_1_FC35B778D0D2D5C4_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757DEB3BE5D42C3A_CLASS_1_FC35B778D0D2D5C4_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_0DB6264D24221B24(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_757DEB3BE5D42C3A_CLASS_1_FC35B778D0D2D5C4_METHOD_1_0DB6264D24221B24_OFFSET))(this, a1);
	}
};
