#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_13E1F0BBFE52F5F0.h"
#include "unitysdk/Enum_3_41536F26CBEE8D4C.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_DOWNLOADFILEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xBB0C830)
#define MOLEMOLE_DOWNLOADFILEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0xBB0C760)
#define MOLEMOLE_DOWNLOADFILEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xBB0C910)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xBB0CA90)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xBB0D300)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xBB0CF40)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_3AAA6D3B99198EEF_OFFSET UNITYSDK_OFFSET(0xBB0D7D0)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_49EF8359EACB58A2_OFFSET UNITYSDK_OFFSET(0xBB0D710)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_610CB1D3639AC22C_OFFSET UNITYSDK_OFFSET(0xBB0CFC0)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_7CA88D1892A11E5A_OFFSET UNITYSDK_OFFSET(0xBB0DA90)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_7FB8B2771D87B67B_OFFSET UNITYSDK_OFFSET(0xBB0DBA0)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_8CC3BBBF60D86F72_OFFSET UNITYSDK_OFFSET(0xBB0DDA0)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_9F6471DF1E4006DE_1_OFFSET UNITYSDK_OFFSET(0xBB0D540)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_9F6471DF1E4006DE_OFFSET UNITYSDK_OFFSET(0xBB0D380)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_A08D881D6637059D_OFFSET UNITYSDK_OFFSET(0xBB0D8F0)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_A8DFE7C77A6BFE73_OFFSET UNITYSDK_OFFSET(0xBB0CAD0)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xBB0D8E0)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_DC142A2AF2A69784_OFFSET UNITYSDK_OFFSET(0xBB0D700)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_EFFC75E1EC424FE3_OFFSET UNITYSDK_OFFSET(0xBB0D160)
#define MOLEMOLE_DOWNLOADFILEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBB0C460)
#define MOLEMOLE_DOWNLOADFILEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xBB0C430)

namespace MoleMole
{
	inline static constexpr unsigned int DownloadFileInfo_TypeDefinitionIndex = 51876;

	class DownloadFileInfo : public ::System::Object
	{
	public:
		::System::String* remoteName; // 0x10
		::System::String* md5; // 0x18
		::System::Int64 fileSize; // 0x20
		::System::Boolean isPatch; // 0x28
		::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>* tags; // 0x30
		::Il2CppArray<::Enum_3_41536F26CBEE8D4C>* packages; // 0x38
		::System::String* remoteParentDir; // 0x40

		::System::Void _ctor(::System::String* a1, ::System::Int64 a2, ::System::String* a3, ::System::Boolean a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MoleMole::DownloadFileInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* Method_1_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_128774387667156B_OFFSET))(this);
		}

		::System::Boolean Method_1_A8DFE7C77A6BFE73(::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_A8DFE7C77A6BFE73_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_610CB1D3639AC22C(::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_610CB1D3639AC22C_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_EFFC75E1EC424FE3(::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_EFFC75E1EC424FE3_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Void Method_1_9F6471DF1E4006DE(::Enum_3_41536F26CBEE8D4C a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_41536F26CBEE8D4C))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_9F6471DF1E4006DE_OFFSET))(this, a1);
		}

		::System::Void Method_1_9F6471DF1E4006DE_1(::Enum_3_13E1F0BBFE52F5F0 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_13E1F0BBFE52F5F0))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_9F6471DF1E4006DE_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_DC142A2AF2A69784(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_DC142A2AF2A69784_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_49EF8359EACB58A2(::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_49EF8359EACB58A2_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
		}

		::System::Boolean Method_1_3AAA6D3B99198EEF(::Enum_3_13E1F0BBFE52F5F0 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_13E1F0BBFE52F5F0))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_3AAA6D3B99198EEF_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_A08D881D6637059D(::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_A08D881D6637059D_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_7CA88D1892A11E5A(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_7CA88D1892A11E5A_OFFSET))(this, a1);
		}

		::System::Void Method_1_7FB8B2771D87B67B(::Il2CppArray<::Enum_3_41536F26CBEE8D4C>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Enum_3_41536F26CBEE8D4C>*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_7FB8B2771D87B67B_OFFSET))(this, a1);
		}

		::System::Void Method_1_8CC3BBBF60D86F72(::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_8CC3BBBF60D86F72_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_1D4018D4200358D0_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
		}
	};
}
