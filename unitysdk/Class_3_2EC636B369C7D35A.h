#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB4261DB06E3A6BD.h"
#include "unitysdk/Enum_3_B3DC68436059CEA0.h"

class Class_3_D6BE13BFAB99CA8A;
class Class_5_2169ABC757988FED;
namespace MoleMole::Config { class VESequenceInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_2EC636B369C7D35A_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xAB259E0)
#define CLASS_3_2EC636B369C7D35A_METHOD_3_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0xAB25390)
#define CLASS_3_2EC636B369C7D35A_METHOD_3_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xAB25CB0)
#define CLASS_3_2EC636B369C7D35A_METHOD_3_B7F8E0B4AF22DEA3_1_OFFSET UNITYSDK_OFFSET(0xAB25450)
#define CLASS_3_2EC636B369C7D35A_METHOD_3_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0xAB256D0)
#define CLASS_3_2EC636B369C7D35A_METHOD_3_C4FDF5DB46830B8A_OFFSET UNITYSDK_OFFSET(0xAB25640)
#define CLASS_3_2EC636B369C7D35A__CTOR_OFFSET UNITYSDK_OFFSET(0xAB24F80)

inline static constexpr unsigned int Class_3_2EC636B369C7D35A_TypeDefinitionIndex = 55056;

class Class_3_2EC636B369C7D35A : public ::Class_2_AB4261DB06E3A6BD
{
public:
	::Class_2_AB4261DB06E3A6BD* Field_3_3; // 0x40
	::System::Collections::Generic::List_1<::Class_3_D6BE13BFAB99CA8A*>* Field_3_1; // 0x48
	::System::String* Field_3_5; // 0x50
	::Class_5_2169ABC757988FED* Field_3_4; // 0x58
	::System::Int32 Field_3_2; // 0x60
	::Enum_3_B3DC68436059CEA0 Field_3_0; // 0x64

	::System::Void _ctor(::Class_5_2169ABC757988FED* a1, ::System::Collections::Generic::List_1<::MoleMole::Config::VESequenceInfo*>* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_2169ABC757988FED*, ::System::Collections::Generic::List_1<::MoleMole::Config::VESequenceInfo*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_2EC636B369C7D35A__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EC636B369C7D35A_METHOD_3_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_3_C4FDF5DB46830B8A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2EC636B369C7D35A_METHOD_3_C4FDF5DB46830B8A_OFFSET))(this, a1);
	}

	::System::Void Method_3_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EC636B369C7D35A_METHOD_3_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EC636B369C7D35A_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_B7F8E0B4AF22DEA3_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EC636B369C7D35A_METHOD_3_B7F8E0B4AF22DEA3_1_OFFSET))(this);
	}

	::System::Void Method_3_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EC636B369C7D35A_METHOD_3_4307B2A4B4A12C1A_OFFSET))(this);
	}
};
