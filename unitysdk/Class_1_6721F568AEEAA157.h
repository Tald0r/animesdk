#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_49.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_729;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6721F568AEEAA157_FINALIZE_OFFSET UNITYSDK_OFFSET(0x13E6DB90)
#define CLASS_1_6721F568AEEAA157_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x13E6D4D0)
#define CLASS_1_6721F568AEEAA157_METHOD_1_1709A247CD0E080B_OFFSET UNITYSDK_OFFSET(0x13E6ED10)
#define CLASS_1_6721F568AEEAA157_METHOD_1_20F0A15C724866EA_OFFSET UNITYSDK_OFFSET(0x13E6DE90)
#define CLASS_1_6721F568AEEAA157_METHOD_1_3BC6B414068B5B5A_OFFSET UNITYSDK_OFFSET(0x13E6F400)
#define CLASS_1_6721F568AEEAA157_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x13E6D840)
#define CLASS_1_6721F568AEEAA157_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x13E6D750)
#define CLASS_1_6721F568AEEAA157_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x13E6D9F0)
#define CLASS_1_6721F568AEEAA157_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x13E6DAB0)
#define CLASS_1_6721F568AEEAA157_METHOD_1_C69AFE5892863775_OFFSET UNITYSDK_OFFSET(0x13E6D850)
#define CLASS_1_6721F568AEEAA157_METHOD_1_C969C48EB0DAEC25_OFFSET UNITYSDK_OFFSET(0x13E6E0A0)
#define CLASS_1_6721F568AEEAA157_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x13E6D4B0)
#define CLASS_1_6721F568AEEAA157_METHOD_1_EB16708D03EE8705_OFFSET UNITYSDK_OFFSET(0x13E6DDA0)
#define CLASS_1_6721F568AEEAA157_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x13E6DE70)
#define CLASS_1_6721F568AEEAA157__CTOR_OFFSET UNITYSDK_OFFSET(0x13E6DCD0)

inline static constexpr unsigned int Class_1_6721F568AEEAA157_TypeDefinitionIndex = 14492;

class Class_1_6721F568AEEAA157 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_729*>*>* Field_1_4; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_729*>*>* Field_1_5; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x20
	::Struct_2_1862835F8661A21F_49 Field_1_0; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x40
	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_729*>* Field_1_6; // 0x48
	::Il2CppArray<::Class_2_208CC9941471731A_729*>* Field_1_1; // 0x50
	::System::Boolean Field_1_8; // 0x58
	::System::Int32 Field_1_7; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6721F568AEEAA157__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6721F568AEEAA157_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6721F568AEEAA157_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C69AFE5892863775(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6721F568AEEAA157_METHOD_1_C69AFE5892863775_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_6721F568AEEAA157_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6721F568AEEAA157_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6721F568AEEAA157_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6721F568AEEAA157_FINALIZE_OFFSET))(this);
	}

	::Il2CppArray<::Class_2_208CC9941471731A_729*>* Method_1_EB16708D03EE8705()
	{
		return ((::Il2CppArray<::Class_2_208CC9941471731A_729*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6721F568AEEAA157_METHOD_1_EB16708D03EE8705_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6721F568AEEAA157_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6721F568AEEAA157_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_C969C48EB0DAEC25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6721F568AEEAA157_METHOD_1_C969C48EB0DAEC25_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_729*>* Method_1_1709A247CD0E080B(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_729*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6721F568AEEAA157_METHOD_1_1709A247CD0E080B_OFFSET))(this, a1, a2);
	}

	::Class_2_208CC9941471731A_729* Method_1_3BC6B414068B5B5A(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_729*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6721F568AEEAA157_METHOD_1_3BC6B414068B5B5A_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_729* Method_1_20F0A15C724866EA(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_729*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6721F568AEEAA157_METHOD_1_20F0A15C724866EA_OFFSET))(this, a1);
	}
};
