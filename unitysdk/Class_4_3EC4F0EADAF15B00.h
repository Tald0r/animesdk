#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_4_3EC4F0EADAF15B00_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xA67EE00)
#define CLASS_4_3EC4F0EADAF15B00_METHOD_4_3DADE0B6AD121A80_OFFSET UNITYSDK_OFFSET(0xA67E990)
#define CLASS_4_3EC4F0EADAF15B00_METHOD_4_E6101D93928B4095_OFFSET UNITYSDK_OFFSET(0xA67DDD0)
#define CLASS_4_3EC4F0EADAF15B00_METHOD_4_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xA67DAE0)
#define CLASS_4_3EC4F0EADAF15B00__CTOR_OFFSET UNITYSDK_OFFSET(0xA67EC60)

inline static constexpr unsigned int Class_4_3EC4F0EADAF15B00_TypeDefinitionIndex = 45429;

class Class_4_3EC4F0EADAF15B00 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::Boolean>* Field_4_2; // 0x28
	::Class_4_AF61EEC11F34483C<::System::Boolean>* Field_4_4; // 0x30
	::Class_4_179456445C225AB4<::System::Boolean>* Field_4_1; // 0x38
	::Class_4_179456445C225AB4<::System::Boolean>* Field_4_3; // 0x40
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_4_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3EC4F0EADAF15B00__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3EC4F0EADAF15B00_METHOD_4_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_4_E6101D93928B4095(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_3EC4F0EADAF15B00_METHOD_4_E6101D93928B4095_OFFSET))(this, a1);
	}

	static ::System::Void Method_4_3DADE0B6AD121A80(::MoleMole::Config::EntityType a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_4_3EC4F0EADAF15B00_METHOD_4_3DADE0B6AD121A80_OFFSET))(a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3EC4F0EADAF15B00_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
