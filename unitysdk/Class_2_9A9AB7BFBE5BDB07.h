#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B4138D32F75250D2.h"
#include "unitysdk/Enum_3_F8C71DEE253F84BD.h"
#include "unitysdk/Foundation/Singleton_1.h"
#include "unitysdk/Struct_2_57C422EDEAAA7766.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_300;
class Class_0_16E4307DCC419505_498;
class Class_1_BC9D27E6028F322B;
namespace Nap::NapECS { class EcsEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_2_9A9AB7BFBE5BDB07_METHOD_2_1850719FDD04AA9D_OFFSET UNITYSDK_OFFSET(0x7BD5120)
#define CLASS_2_9A9AB7BFBE5BDB07_METHOD_2_3AABC20A1E5B3CC3_OFFSET UNITYSDK_OFFSET(0x7BD58C0)
#define CLASS_2_9A9AB7BFBE5BDB07_METHOD_2_7DE4B1548720543E_OFFSET UNITYSDK_OFFSET(0x7BD4C00)
#define CLASS_2_9A9AB7BFBE5BDB07_METHOD_2_B455ED73ED9E4AEC_OFFSET UNITYSDK_OFFSET(0x7BD5780)
#define CLASS_2_9A9AB7BFBE5BDB07_METHOD_2_D26E09C55DFD9523_OFFSET UNITYSDK_OFFSET(0x7BD5480)
#define CLASS_2_9A9AB7BFBE5BDB07_METHOD_2_DD28B08B005CBCF9_OFFSET UNITYSDK_OFFSET(0x7BD4DD0)
#define CLASS_2_9A9AB7BFBE5BDB07_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x7BD59C0)
#define CLASS_2_9A9AB7BFBE5BDB07__CTOR_OFFSET UNITYSDK_OFFSET(0x7BD4B80)

inline static constexpr unsigned int Class_2_9A9AB7BFBE5BDB07_TypeDefinitionIndex = 53534;

class Class_2_9A9AB7BFBE5BDB07 : public ::Foundation::Singleton_1<::Class_2_9A9AB7BFBE5BDB07*>
{
public:
	::Class_0_16E4307DCC419505_300* Field_2_0; // 0x10
	::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_498*>* Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A9AB7BFBE5BDB07__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7DE4B1548720543E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9A9AB7BFBE5BDB07_METHOD_2_7DE4B1548720543E_OFFSET))(this, a1);
	}

	::System::Void Method_2_DD28B08B005CBCF9(::System::Int32 a1, ::Nap::NapECS::EcsEntity* a2, ::System::String* a3, ::Enum_3_B4138D32F75250D2 a4, ::System::Action* a5, ::System::Action* a6, ::System::Action_1<::Class_1_BC9D27E6028F322B*>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Nap::NapECS::EcsEntity*, ::System::String*, ::Enum_3_B4138D32F75250D2, ::System::Action*, ::System::Action*, ::System::Action_1<::Class_1_BC9D27E6028F322B*>*))((::PBYTE)hIl2Cpp + CLASS_2_9A9AB7BFBE5BDB07_METHOD_2_DD28B08B005CBCF9_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_1850719FDD04AA9D(::System::Int32 a1, ::Il2CppArray<::Struct_2_57C422EDEAAA7766>* a2, ::System::String* a3, ::Enum_3_F8C71DEE253F84BD a4, ::System::Action* a5, ::System::Action* a6, ::System::Action_1<::Class_1_BC9D27E6028F322B*>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::Struct_2_57C422EDEAAA7766>*, ::System::String*, ::Enum_3_F8C71DEE253F84BD, ::System::Action*, ::System::Action*, ::System::Action_1<::Class_1_BC9D27E6028F322B*>*))((::PBYTE)hIl2Cpp + CLASS_2_9A9AB7BFBE5BDB07_METHOD_2_1850719FDD04AA9D_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_D26E09C55DFD9523(::System::Int32 a1, ::System::Nullable_1<::System::Boolean> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + CLASS_2_9A9AB7BFBE5BDB07_METHOD_2_D26E09C55DFD9523_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B455ED73ED9E4AEC(::System::Nullable_1<::System::Boolean> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + CLASS_2_9A9AB7BFBE5BDB07_METHOD_2_B455ED73ED9E4AEC_OFFSET))(this, a1);
	}

	::System::Void Method_2_3AABC20A1E5B3CC3(::System::Nullable_1<::System::Boolean> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + CLASS_2_9A9AB7BFBE5BDB07_METHOD_2_3AABC20A1E5B3CC3_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A9AB7BFBE5BDB07_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
