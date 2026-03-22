#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_518.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_407;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2DA58EA41281C168_FINALIZE_OFFSET UNITYSDK_OFFSET(0x11A07A80)
#define CLASS_1_2DA58EA41281C168_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x11A07650)
#define CLASS_1_2DA58EA41281C168_METHOD_1_20F0A15C724866EA_OFFSET UNITYSDK_OFFSET(0x11A07E10)
#define CLASS_1_2DA58EA41281C168_METHOD_1_3BC6B414068B5B5A_OFFSET UNITYSDK_OFFSET(0x11A08460)
#define CLASS_1_2DA58EA41281C168_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x11A079B0)
#define CLASS_1_2DA58EA41281C168_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x11A078C0)
#define CLASS_1_2DA58EA41281C168_METHOD_1_655DDB722F1FDE73_OFFSET UNITYSDK_OFFSET(0x11A080E0)
#define CLASS_1_2DA58EA41281C168_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x11A079C0)
#define CLASS_1_2DA58EA41281C168_METHOD_1_97E14CF634E4A3BE_OFFSET UNITYSDK_OFFSET(0x11A08390)
#define CLASS_1_2DA58EA41281C168_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x11A07C60)
#define CLASS_1_2DA58EA41281C168_METHOD_1_C70C8176486DAEF5_OFFSET UNITYSDK_OFFSET(0x11A07BB0)
#define CLASS_1_2DA58EA41281C168_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x11A07630)
#define CLASS_1_2DA58EA41281C168_METHOD_1_DD66B134B442241D_OFFSET UNITYSDK_OFFSET(0x11A08040)
#define CLASS_1_2DA58EA41281C168_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x11A08020)
#define CLASS_1_2DA58EA41281C168__CTOR_OFFSET UNITYSDK_OFFSET(0x11A07D40)

inline static constexpr unsigned int Class_1_2DA58EA41281C168_TypeDefinitionIndex = 11638;

class Class_1_2DA58EA41281C168 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_5; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x20
	::Il2CppArray<::Class_2_208CC9941471731A_407*>* Field_1_1; // 0x28
	::Struct_2_1862835F8661A21F_518 Field_1_0; // 0x30
	::System::Int32 Field_1_4; // 0x48
	::System::Boolean Field_1_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DA58EA41281C168__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DA58EA41281C168_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DA58EA41281C168_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DA58EA41281C168_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DA58EA41281C168_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_C70C8176486DAEF5(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2DA58EA41281C168_METHOD_1_C70C8176486DAEF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_2DA58EA41281C168_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DA58EA41281C168_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_407* Method_1_20F0A15C724866EA(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_407*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2DA58EA41281C168_METHOD_1_20F0A15C724866EA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_DD66B134B442241D(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2DA58EA41281C168_METHOD_1_DD66B134B442241D_OFFSET))(this, a1);
	}

	::Il2CppArray<::Class_2_208CC9941471731A_407*>* Method_1_97E14CF634E4A3BE()
	{
		return ((::Il2CppArray<::Class_2_208CC9941471731A_407*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DA58EA41281C168_METHOD_1_97E14CF634E4A3BE_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_407* Method_1_3BC6B414068B5B5A(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_407*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2DA58EA41281C168_METHOD_1_3BC6B414068B5B5A_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DA58EA41281C168_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_655DDB722F1FDE73()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DA58EA41281C168_METHOD_1_655DDB722F1FDE73_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DA58EA41281C168_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}
};
