#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_75983E93750FA215;

#define CLASS_1_A91BF33C3F847B42_METHOD_1_0EAB95DBCD766897_OFFSET UNITYSDK_OFFSET(0x1A0DCBC0)
#define CLASS_1_A91BF33C3F847B42_METHOD_1_28718D08835F451A_OFFSET UNITYSDK_OFFSET(0x1A0DCB60)
#define CLASS_1_A91BF33C3F847B42_METHOD_1_8E47676A7A416868_OFFSET UNITYSDK_OFFSET(0x1A0DCE60)
#define CLASS_1_A91BF33C3F847B42__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0D7970)

inline static constexpr unsigned int Class_1_A91BF33C3F847B42_TypeDefinitionIndex = 31794;

class Class_1_A91BF33C3F847B42 : public ::System::Object
{
public:
	::Il2CppArray<::System::Byte>* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A91BF33C3F847B42__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_28718D08835F451A(::Il2CppArray<::System::Byte>*& a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_A91BF33C3F847B42_METHOD_1_28718D08835F451A_OFFSET))(this, a1, a2);
	}

	static ::Il2CppArray<::System::Byte>* Method_1_0EAB95DBCD766897(::System::UInt64 a1, ::System::UInt64 a2)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_A91BF33C3F847B42_METHOD_1_0EAB95DBCD766897_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_8E47676A7A416868(::Class_1_75983E93750FA215* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_75983E93750FA215*))((::PBYTE)hIl2Cpp + CLASS_1_A91BF33C3F847B42_METHOD_1_8E47676A7A416868_OFFSET))(this, a1);
	}
};
