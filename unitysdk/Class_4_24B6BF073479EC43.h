#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_1_E4DCFD174698F990;
class Class_3_B537A0AA78803363;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_24B6BF073479EC43_METHOD_4_1993A0891E67C2A9_OFFSET UNITYSDK_OFFSET(0x9027F40)
#define CLASS_4_24B6BF073479EC43_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x9027F30)
#define CLASS_4_24B6BF073479EC43_METHOD_4_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x9027650)
#define CLASS_4_24B6BF073479EC43_METHOD_4_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x9027250)
#define CLASS_4_24B6BF073479EC43_METHOD_4_B7E3C3DAFBD8F4B2_OFFSET UNITYSDK_OFFSET(0x90270E0)
#define CLASS_4_24B6BF073479EC43_METHOD_4_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x9028320)
#define CLASS_4_24B6BF073479EC43_METHOD_4_FB81EBE81ABB70A0_OFFSET UNITYSDK_OFFSET(0x90276E0)
#define CLASS_4_24B6BF073479EC43__CTOR_OFFSET UNITYSDK_OFFSET(0x9027C00)

inline static constexpr unsigned int Class_4_24B6BF073479EC43_TypeDefinitionIndex = 50003;

class Class_4_24B6BF073479EC43 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::Boolean>* Field_4_2; // 0x28
	::Class_4_179456445C225AB4<::System::Boolean>* Field_4_1; // 0x30
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* Field_4_0; // 0x38
	::Class_3_B537A0AA78803363* Field_4_6; // 0x40
	::Class_3_B537A0AA78803363* Field_4_4; // 0x48
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_3; // 0x50
	::Class_3_B537A0AA78803363* Field_4_5; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_24B6BF073479EC43__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_B7E3C3DAFBD8F4B2(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_4_24B6BF073479EC43_METHOD_4_B7E3C3DAFBD8F4B2_OFFSET))(this, a1);
	}

	::System::Void Method_4_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_24B6BF073479EC43_METHOD_4_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_4_3F0F9592A0E917D4(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_24B6BF073479EC43_METHOD_4_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_24B6BF073479EC43_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_4_FB81EBE81ABB70A0(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_24B6BF073479EC43_METHOD_4_FB81EBE81ABB70A0_OFFSET))(this, a1);
	}

	::System::Void Method_4_E9A575D18A0748D9(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_4_24B6BF073479EC43_METHOD_4_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	static ::System::Void Method_4_1993A0891E67C2A9(::Foundation::ViewObject::ViewObjectHandle a1, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_24B6BF073479EC43_METHOD_4_1993A0891E67C2A9_OFFSET))(a1, a2, a3);
	}
};
